#include "MovePrevious.hpp"

Mindopen::MovePrevious::MovePrevious()
{
	
}

Mindopen::MovePrevious::~MovePrevious()
{
}

Mindopen::MovePrevious::MovePrevious(const MovePrevious&) 
{
    
}

Mindopen::MovePrevious & Mindopen::MovePrevious::operator = (const MovePrevious&) 
{
    return (*this);
}

void Mindopen::MovePrevious::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    it--;
    itIn++;
}
