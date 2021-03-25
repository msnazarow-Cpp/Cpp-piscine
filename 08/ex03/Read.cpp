#include "Read.hpp"
#include <iostream>

Mindopen::Read::Read()
{
	
}

Mindopen::Read::~Read()
{
}

Mindopen::Read::Read(const Read&) 
{
    
}

Mindopen::Read & Mindopen::Read::operator = (const Read&) 
{
    return (*this);
}

void Mindopen::Read::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    *it = std::cin.get();
    itIn++;
}


