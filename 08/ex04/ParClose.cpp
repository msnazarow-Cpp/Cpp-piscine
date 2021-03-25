#include "ParClose.hpp"
#include <iostream>

void ParClose::print() const
{
    std::cout << "ParClose ";
}

ParClose::ParClose() 
{
    
}

ParClose::ParClose(const ParClose &) 
{
    
}

ParClose& ParClose::operator=(const ParClose &) 
{
    return (*this);
}

ParClose::~ParClose() 
{
    
}
