#include "Dec.hpp"

Mindopen::Dec::Dec()
{
	
}

Mindopen::Dec::~Dec()
{
}

Mindopen::Dec::Dec(const Dec&) 
{
    
}

Mindopen::Dec & Mindopen::Dec::operator = (const Dec&) 
{
    return (*this);
}

void Mindopen::Dec::execute(std::string::iterator &it, std::vector<Instruction *>::iterator &itIn) 
{
    (*it)--;
    itIn++;
}
