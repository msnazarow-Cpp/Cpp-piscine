#include "CentralBureaucracy.hpp"
#include <queue>
#include <cstdlib>

CentralBureaucracy::CentralBureaucracy(){}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &buro)
{
	*this = buro;
}

CentralBureaucracy::~CentralBureaucracy()
{
	while (!forms->empty())
	{
		delete forms->front();
		forms->pop();
	}
}

void CentralBureaucracy::feed(Bureaucrat *crat) {
	for (int i = 0; i < 20; i++)
	{
		if (!blocks[i].signcrat())
		{
			blocks[i].setSigncrat(crat);
			return;
		}
		else if (!blocks[i].execcrat())
		{
			blocks[i].setExeccrat(crat);
			return;
		}
	}
	crats->push(crat);
}

void CentralBureaucracy::queueUp(std::string const & name) {
	targets->push(name);
}

CentralBureaucracy&CentralBureaucracy::operator=(CentralBureaucracy &buro) {
	for (int i = 0; i < 20; i++)
		blocks[i] = buro.blocks[i];
	return (*this);
}

void CentralBureaucracy::doBureaucracy(void) {
	std::string names[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	while (!targets->empty())
	{
		for (int i = 0; i < 20 && !targets->empty(); i++)
		{
			if (blocks[i].signcrat() && blocks[i].execcrat())
			{	if (!blocks[i].intern())
					blocks[i].setIntern(new Intern);
				forms->push(blocks[i].doBureaucracy(names[rand() % 3], targets->front()));
				targets->pop();
			}
			else
				break;
		}
	}
}
