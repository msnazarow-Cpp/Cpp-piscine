#include "StartLoop.hpp"
#include "EndLoop.hpp"

Mindopen::StartLoop::StartLoop()
{
	
}

Mindopen::StartLoop::~StartLoop()
{
}

Mindopen::StartLoop::StartLoop(const StartLoop& dec) 
{
    
}

Mindopen::StartLoop & Mindopen::StartLoop::operator = (const StartLoop& dec) 
{
    return (*this);
}

void Mindopen::StartLoop::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    if (*it == 0)
        while (!dynamic_cast<EndLoop*>(*itIn))
            itIn++;
    else
        itIn++;
    
}


