#pragma once
#include <ostream>
class Token
{
public:
    Token();
    Token(const Token &);
    Token &operator=(const Token &);
    virtual ~Token();
    virtual void print() const = 0;
};

