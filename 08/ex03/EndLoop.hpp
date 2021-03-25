#pragma once
#include <array>
#include "Mindopen.hpp"
#include "Instruction.hpp"
class Mindopen::EndLoop : public Instruction
{
public:
	EndLoop();
	~EndLoop();
	EndLoop(const EndLoop& dec);
	EndLoop & operator = (const EndLoop& dec);
	void execute(std::string::iterator &it, std::vector<Instruction *>::iterator &itIn);
private:

};
