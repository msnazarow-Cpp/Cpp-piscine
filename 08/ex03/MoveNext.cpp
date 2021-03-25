#include "MoveNext.hpp"

Mindopen::MoveNext::MoveNext()
{
	
}

Mindopen::MoveNext::~MoveNext()
{
}

Mindopen::MoveNext::MoveNext(const MoveNext&) 
{
    
}

Mindopen::MoveNext & Mindopen::MoveNext::operator = (const MoveNext&) 
{
    return (*this);
}

void Mindopen::MoveNext::execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) 
{
    it++;
    itIn++;
}
