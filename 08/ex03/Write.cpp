#include "Write.hpp"
#include <iostream>

Mindopen::Write::Write()
{
	
}

Mindopen::Write::~Write()
{
}

Mindopen::Write::Write(const Write& dec) 
{
    
}

Mindopen::Write & Mindopen::Write::operator = (const Write& dec) 
{
    return (*this);
}

void Mindopen::Write::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    std::cout << *it ;
    itIn++;
}


