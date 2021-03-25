#include "Read.hpp"
#include <iostream>

Mindopen::Read::Read()
{
	
}

Mindopen::Read::~Read()
{
}

Mindopen::Read::Read(const Read& dec) 
{
    
}

Mindopen::Read & Mindopen::Read::operator = (const Read& dec) 
{
    return (*this);
}

void Mindopen::Read::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    *it = std::cin.get();
    itIn++;
}


