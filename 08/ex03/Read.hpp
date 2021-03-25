#pragma once
#include "Mindopen.hpp"
#include "Instruction.hpp"
class Mindopen::Read : public Instruction
{
public:
	Read();
	~Read();
	Read(const Read& dec);
	Read & operator = (const Read& dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};
