#pragma once
#include "Token.hpp"


class ParClose : public Token
{
public:
    ParClose();
    ParClose(const ParClose &);
    ParClose &operator=(const ParClose &);
    ~ParClose();
    void print() const;
};

