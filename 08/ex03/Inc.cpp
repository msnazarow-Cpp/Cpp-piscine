#include "Inc.hpp"

Mindopen::Inc::Inc()
{
	
}

Mindopen::Inc::~Inc()
{
}

Mindopen::Inc::Inc(const Inc&) 
{
    
}

Mindopen::Inc & Mindopen::Inc::operator = (const Inc&) 
{
    return (*this);
}

void Mindopen::Inc::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    (*it)++;
    itIn++;
}
