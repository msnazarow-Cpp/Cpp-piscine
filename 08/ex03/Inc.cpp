#include "Inc.hpp"

Mindopen::Inc::Inc()
{
	
}

Mindopen::Inc::~Inc()
{
}

Mindopen::Inc::Inc(const Inc& dec) 
{
    
}

Mindopen::Inc & Mindopen::Inc::operator = (const Inc& dec) 
{
    return (*this);
}

void Mindopen::Inc::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    (*it)++;
    itIn++;
}
