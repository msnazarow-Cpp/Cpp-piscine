#pragma once
#include "Token.hpp"
#include <ostream>

class ParOpen : public Token
{
public:
    ParOpen();
    ParOpen(const ParOpen &);
    ParOpen &operator=(const ParOpen &);
    ~ParOpen();
    void print() const;
};
