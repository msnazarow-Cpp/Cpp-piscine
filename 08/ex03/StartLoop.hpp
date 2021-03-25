#pragma once
#include <array>
#include "Mindopen.hpp"
#include "Instruction.hpp"
class Mindopen::StartLoop : public Instruction
{
public:
	StartLoop();
	~StartLoop();
	StartLoop(const StartLoop& dec);
	StartLoop & operator = (const StartLoop& dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};
