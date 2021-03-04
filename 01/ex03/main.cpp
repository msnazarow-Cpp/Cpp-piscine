#include "ZombieHorde.hpp"



int main(void)
{
	srand(time(0));
	ZombieHorde Hord = ZombieHorde(10);
	Hord.announce();
	return 0;
}
