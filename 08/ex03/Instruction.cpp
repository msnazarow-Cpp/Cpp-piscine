#include "Instruction.hpp"

Mindopen::Instruction::Instruction()
{
	
}

Mindopen::Instruction::~Instruction()
{
}

Mindopen::Instruction::Instruction(const Instruction& dec) 
{
    *this = dec;
}

Mindopen::Instruction & Mindopen::Instruction::operator = (const Instruction&) 
{
    return (*this);
}

