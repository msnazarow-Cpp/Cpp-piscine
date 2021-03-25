#include "Number.hpp"
#include <iostream>

Number::Number(int n):n(n)
{
    
}

Number::Number(const Number &num):n(num.n) 
{
    
}

Number& Number::operator=(const Number & number) 
{
    return (*this);
}

Number::~Number() 
{
    
}

void    Number::print() const
{
    std::cout << "Num("<< n << ") ";
}
