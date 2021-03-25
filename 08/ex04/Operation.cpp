#include "Operation.hpp"
#include <iostream>

Operation::Operation(const char c,const char priority):c(c), priority(priority)
{

}

Operation::Operation(const Operation & op):c(op.c),priority(op.priority)
{
    
}

Operation& Operation::operator=(const Operation &) 
{
    return (*this);
}

Operation::~Operation() 
{
    
}

void Operation::print() const
{
    std::cout << "Op("<< c << ") ";
}