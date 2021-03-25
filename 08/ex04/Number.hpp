#pragma once
#include "Token.hpp"
#include <ostream>

class Number : public Token
{
public:
    Number(int n = 0);
    Number(const Number &);
    Number &operator=(const Number &);
    ~Number();
    const int n;
    void print() const;
};


