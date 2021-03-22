#pragma once
#include "OfficeBlock.hpp"
#include "Quque.hpp"

class CentralBureaucracy
{
private:
	OfficeBlock blocks[20];
	Quque <Form*> *forms;
	Quque <std::string> *targets;
	Quque <Bureaucrat*> *crats;
public:
	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy &buro);
	CentralBureaucracy&operator=(CentralBureaucracy &buro);
	~CentralBureaucracy();
	void feed(Bureaucrat *crat);
	void queueUp(std::string const & name);
	void doBureaucracy(void);
};