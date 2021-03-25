#include "Write.hpp"
#include <iostream>

Mindopen::Write::Write()
{
	
}

Mindopen::Write::~Write()
{
}

Mindopen::Write::Write(const Write&) 
{
    
}

Mindopen::Write & Mindopen::Write::operator = (const Write&) 
{
    return (*this);
}

void Mindopen::Write::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    std::cout << *it ;
    itIn++;
}


