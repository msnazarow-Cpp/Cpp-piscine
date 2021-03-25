#include "Calculator.hpp"
#include <iostream>
#include "ParOpen.hpp"
#include "ParClose.hpp"
#include "Number.hpp"
#include "Operation.hpp"
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <ios>

int exit_error(int n, const char *s);

Calculator::Calculator() 
{
    
}

Calculator::Calculator(const Calculator &) 
{
    
}

Calculator& Calculator::operator=(const Calculator & calc) 
{
    for (size_t i = 0; i < tokens.size(); i++)
        delete tokens[i];
    for (size_t i = 0; i < tokens.size(); i++)
        tokens[i] = calc.tokens[i];
    out = calc.out;
    postfix = calc.postfix;    
    return (*this);
}

Calculator::~Calculator() 
{
    for (size_t i = 0; i < tokens.size(); i++)
        delete tokens[i];
}

void Calculator::parse(const char *str) 
{
    int i = 0;
    int a;
    char *end;
    int coll = 0;
    while (str[i])
    {
        char c = str[i];
        if (isdigit(c))
           { 
               a = strtol(&str[i], &end, 10);
               i += end - &str[i];
               tokens.push_back(new Number(a));
           }
        else if ((c == '+' || c == '-' ||  c == '*' ||  c == '/') && (++i))
            tokens.push_back(new Operation(c, ((c == '+' || c == '-') ? 1 : 2)));
        else if (c == '(' && (++i) && ++coll)
            tokens.push_back(new ParOpen());
        else if (c == ')' && (++i) && --coll)
            tokens.push_back(new ParClose());
        else if (c == ' ')
            i++;
        else
            exit_error(1, "Expression error");
        if (coll < 0)
            exit_error(1, "Expression error");
    }
}

void Calculator::printTokens(void) 
{
    std::cout << "Tokens: ";
    for (size_t i = 0; i < tokens.size(); i++)
        {
            tokens[i]->print();
        }
    std::cout << std::endl;
}

void Calculator::printPostfix(void) 
{
    std::cout << "Postfix: ";
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (dynamic_cast<Number*>(tokens[i]))
        {
            tokens[i]->print();
            out.push_back(tokens[i]);
        }
        else if (dynamic_cast<ParOpen*>(tokens[i]))
            postfix.push(tokens[i]);
        else if (dynamic_cast<ParClose*>(tokens[i]))
        {
            while(!dynamic_cast<ParOpen*>(postfix.top()))
            {
                postfix.top()->print();
                out.push_back(postfix.top());
                postfix.pop();
            }
            if(dynamic_cast<ParOpen*>(postfix.top()))
                postfix.pop();
        }
        else if (dynamic_cast<Operation*>(tokens[i]))
        {
            while (!postfix.empty() && dynamic_cast<Operation*>(postfix.top()))
            {
                out.push_back(postfix.top());
                postfix.top()->print();
                postfix.pop();
            }
            postfix.push(tokens[i]);
        }
    }
    while (!postfix.empty())
    {
        postfix.top()->print();
        out.push_back(postfix.top());
        postfix.pop();
    }
    std::cout << std::endl;
}

void Calculator::printSteps(void) 
{
    for (size_t i = 0; i < out.size(); )
    {
        if (dynamic_cast<Number*>(out[i]))
        {
            std::cout << "I ";
            out[i]->print();
            std::cout << std::setw(15) << std::setiosflags(std::ios::left) << "| OP Push " << "| ST ";
            postfix.push(out[i]);
            std::stack<Token*> a = postfix;
            for (size_t i = 0; i < postfix.size() ; i++)
            {
                std::cout << dynamic_cast<Number*>(a.top())->n << ' ';
                a.pop();
            }
            std::cout << "]" << std::endl;
            i++;
        }
        else while (i < out.size() && dynamic_cast<Operation*>(out[i]))
        {
            if (postfix.size() < 2)
                exit_error(2, "Error in expression");
            int a = 0,b = 0;
            if (!postfix.empty())
            {
                if (dynamic_cast<Number*>(postfix.top()))
                {
                    b = dynamic_cast<Number*>(postfix.top())->n;
                    postfix.pop();
                }
                if (dynamic_cast<Number*>(postfix.top()))
                {
                    a = dynamic_cast<Number*>(postfix.top())->n;
                    postfix.pop();
                }
            }
            switch (dynamic_cast<Operation*>(out[i])->c)
            {
                case '+':
                {
                    std::cout << "I Op(+) "<< std::setw(15) << std::setiosflags(std::ios::left) << "| OP Add " << "| ST ";
                    Number *n = new Number(a + b);
                    postfix.push(n);
                    tokens.push_back(n);
                    std::stack<Token*> a = postfix;
                    for (size_t i = 0; i < postfix.size() ; i++)
                    {
                        std::cout << dynamic_cast<Number*>(a.top())->n << ' ';
                        a.pop();
                    }
                    std::cout << ']' << std::endl;
                    break;
                }
                case '/':
                {
                    if (b == 0)
                        throw std::runtime_error("Exception: Division by zero");
                    Number *n = new Number(a / b);
                    postfix.push(n);
                    tokens.push_back(n);
                    std::cout << "I Op(/) "<< std::setw(15) << std::setiosflags(std::ios::left) << "| OP Divide " << "| ST ";
                    std::stack<Token*> a = postfix;
                    for (size_t i = 0; i < postfix.size() ; i++)
                    {
                        std::cout << dynamic_cast<Number*>(a.top())->n << ' ';
                        a.pop();
                    }
                    std::cout << ']' << std::endl;
                    break;
                }
                case '-':
                {
                    Number *n = new Number(a - b);
                    tokens.push_back(n);
                    postfix.push(n);
                    std::cout << "I Op(-) "<< std::setw(15) << std::setiosflags(std::ios::left) << "| OP Substruct " << "| ST ";
                    std::stack<Token*> a = postfix;
                    for (size_t i = 0; i < postfix.size() ; i++)
                    {
                        std::cout << dynamic_cast<Number*>(a.top())->n << ' ';
                        a.pop();
                    }
                    std::cout << ']' << std::endl;
                    break;
                }
                case '*':
                {
                    Number *n = new Number(a * b);
                    postfix.push(n);
                    tokens.push_back(n);
                    std::cout << "I Op(*) "<< std::setw(15) << std::setiosflags(std::ios::left) << "| OP Multiply " << "| ST ";
                    std::stack<Token*> a = postfix;
                    for (size_t i = 0; i < postfix.size() ; i++)
                    {
                        std::cout << dynamic_cast<Number*>(a.top())->n << ' ';
                        a.pop();
                    }
                    std::cout << ']' << std::endl;
                    break;
                }
            }
            i++;
        }
    }
    std::cout << "Result : " << dynamic_cast<Number*>(postfix.top())->n << std::endl;
}
