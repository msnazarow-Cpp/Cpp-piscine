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

Calculator::Calculator() 
{
    
}

Calculator::Calculator(const Calculator &) 
{
    
}

Calculator& Calculator::operator=(const Calculator &) 
{
    return (*this);
}

Calculator::~Calculator() 
{
    
}

void Calculator::parse(const char *str) 
{
    int i = 0;
    int a;
    char *end;
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
        else if (c == '(' && (++i))
            tokens.push_back(new ParOpen());
        else if (c == ')' && (++i))
            tokens.push_back(new ParClose());
        else
            i++;
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
            nums.push(dynamic_cast<Number*>(tokens[i]));
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
            // && dynamic_cast<Operation*>(postfix.top())->priority > dynamic_cast<Operation*>(tokens[i])->priority)
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
            int b = dynamic_cast<Number*>(postfix.top())->n;
            postfix.pop();
            int a = dynamic_cast<Number*>(postfix.top())->n;
            postfix.pop();
            switch (dynamic_cast<Operation*>(out[i])->c)
            {
                case '+':
                {
                    std::cout << "I Op(+) "<< std::setw(15) << std::setiosflags(std::ios::left) << "| OP Add " << "| ST ";
                    postfix.push(new Number(a + b));
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
                    postfix.push(new Number(a / b));
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
                    postfix.push(new Number(a - b));
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
                    postfix.push(new Number(a * b));
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
