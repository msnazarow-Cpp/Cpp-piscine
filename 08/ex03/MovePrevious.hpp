#pragma once
#include <array>
#include "Mindopen.hpp"
#include "Instruction.hpp"
class Mindopen::MovePrevious : public Instruction
{
public:
	MovePrevious();
	~MovePrevious();
	MovePrevious(const MovePrevious& dec);
	MovePrevious & operator = (const MovePrevious& dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};
