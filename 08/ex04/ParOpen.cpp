#include "ParOpen.hpp"
#include <iostream>

ParOpen::ParOpen() 
{
    
}

ParOpen::ParOpen(const ParOpen &) 
{
    
}

ParOpen& ParOpen::operator=(const ParOpen &) 
{
    return (*this);
}

ParOpen::~ParOpen() 
{
    
}

void ParOpen::print() const
{
    std::cout << "ParOpen ";
}

