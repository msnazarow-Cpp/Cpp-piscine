#pragma once
#include "Mindopen.hpp"
#include "Instruction.hpp"

class Mindopen::Dec : public Instruction
{
public:
	Dec();
	~Dec();
	Dec(const Dec& dec);
	Dec& operator = (const Dec& _dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};

