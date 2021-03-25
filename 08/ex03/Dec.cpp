#include "Dec.hpp"

Mindopen::Dec::Dec()
{
	
}

Mindopen::Dec::~Dec()
{
}

Mindopen::Dec::Dec(const Dec& dec) 
{
    
}

Mindopen::Dec & Mindopen::Dec::operator = (const Dec& dec) 
{
    return (*this);
}

void Mindopen::Dec::execute(std::string::iterator &it, std::vector<Instruction *>::iterator &itIn) 
{
    (*it)--;
    itIn++;
}
