#include "EndLoop.hpp"
#include "StartLoop.hpp"
Mindopen::EndLoop::EndLoop()
{
	
}

Mindopen::EndLoop::~EndLoop()
{
}

Mindopen::EndLoop::EndLoop(const EndLoop&) 
{
    
}

Mindopen::EndLoop & Mindopen::EndLoop::operator = (const EndLoop&) 
{
    return (*this);
}

void Mindopen::EndLoop::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    if (*it)
        while (!dynamic_cast<StartLoop*>(*itIn))
        {
            itIn--;
        }
    else
        itIn++;
        
}
