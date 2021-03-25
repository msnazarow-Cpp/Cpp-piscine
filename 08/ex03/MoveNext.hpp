#pragma once
#include "Mindopen.hpp"
#include "Instruction.hpp"

class Mindopen::MoveNext: public Instruction
{
public:
	MoveNext();
	~MoveNext();
	MoveNext(const MoveNext& dec);
	MoveNext & operator = (const MoveNext& dec);
	void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn);
private:

};
