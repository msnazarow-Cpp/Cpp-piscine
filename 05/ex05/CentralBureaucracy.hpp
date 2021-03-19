#pragma once
#include "OfficeBlock.hpp"
#include <queue>

class CentralBureaucracy
{
private:
	OfficeBlock blocks[20];
	std::queue <Form*> forms;
	std::queue <std::string> targets;
	std::queue <Bureaucrat*> crats;
public:
	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy &buro);
	CentralBureaucracy&operator=(CentralBureaucracy &buro);
	~CentralBureaucracy();
	void feed(Bureaucrat *crat);
	void queueUp(std::string name);
	void doBureaucracy(void);
};