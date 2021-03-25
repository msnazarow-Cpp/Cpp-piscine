#pragma once
#include <ostream>
class Token
{
public:
    Token();
    Token(const Token &);
    Token &operator=(const Token &);
    ~Token();
    virtual void print() const = 0;

};

