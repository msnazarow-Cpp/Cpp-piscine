#pragma once
#include "Token.hpp"
#include <ostream>

class Operation : public Token
{
public:
    Operation(const char c = 0,const char priority = 0);
    Operation(const Operation &);
    Operation &operator=(const Operation &);
    ~Operation();
    const char c;
    void print() const;
    const char priority;
};
