#include "MovePrevious.hpp"

Mindopen::MovePrevious::MovePrevious()
{
	
}

Mindopen::MovePrevious::~MovePrevious()
{
}

Mindopen::MovePrevious::MovePrevious(const MovePrevious& dec) 
{
    
}

Mindopen::MovePrevious & Mindopen::MovePrevious::operator = (const MovePrevious& dec) 
{
    return (*this);
}

void Mindopen::MovePrevious::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    it--;
    itIn++;
}
