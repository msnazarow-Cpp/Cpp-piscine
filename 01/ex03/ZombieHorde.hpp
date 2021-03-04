#pragma once
#include "Zombie.hpp"
class ZombieHorde
{
private:
	int		number;
	Zombie *Zombies;

public:
	void announce();
	ZombieHorde(int N);
	~ZombieHorde();
	Zombie randomChump();
};
