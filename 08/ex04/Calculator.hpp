#pragma once
#include "Operation.hpp"
#include "Number.hpp"
#include <stack>
#include <vector>

class Calculator
{
public:
    Calculator();
    Calculator(const Calculator &);
    Calculator &operator=(const Calculator &);
    ~Calculator();
    void parse(const char *str);
    void printTokens(void);
    void printPostfix(void);
    void printSteps(void);
private:
    std::vector<Token*> tokens;
    std::stack<Token*> postfix;
    std::vector<Token*> out;
    std::stack<Operation *> ops;
    std::stack<Number*> nums;
};