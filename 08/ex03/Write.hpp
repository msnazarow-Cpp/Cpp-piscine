#pragma once
#include <array>
#include "Mindopen.hpp"
#include "Instruction.hpp"
class Mindopen::Write : public Instruction
{
public:
	Write();
	~Write();
	Write(const Write& dec);
	Write & operator = (const Write& dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};
