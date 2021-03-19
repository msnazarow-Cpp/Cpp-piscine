#include "CentralBureaucracy.hpp"
#include <cstdlib>

int main(void)
{
	srand(time(NULL));
	CentralBureaucracy buro;

	std::string names[10] = {"Bob ", "Stive ", "Donald ", "Liam ", "Jeycob ", "Ethan ", "Betty ", "Alan ", "Ben ", "Anna "};
	std::string surnames[10] = {"Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Millers", "Wilson", "Moore", "Taylor"};

	for (int i = 0; i < 20; i++)
	{
		buro.feed(new Bureaucrat(names[rand() % 10] + surnames[rand() % 10] , rand() % 150 + 1));
	}
	for (int i = 0; i < 20; i++)
	{
		buro.queueUp(names[rand() % 10] + surnames[rand() % 10]);
	}
	buro.doBureaucracy();
	return 0;
}
