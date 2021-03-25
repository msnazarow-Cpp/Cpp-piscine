#pragma once
#include "Mindopen.hpp"
#include "Instruction.hpp"
class Mindopen::Inc : public Instruction
{
public:
	Inc();
	~Inc();
	Inc(const Inc& dec);
	Inc & operator = (const Inc& dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};