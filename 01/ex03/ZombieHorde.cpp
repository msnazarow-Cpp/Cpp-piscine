#include "ZombieHorde.hpp"

void ZombieHorde::announce()
{
	for (int i = 0; i < this->number; i++)
		this->Zombies[i].announce();
}

Zombie	ZombieHorde::randomChump()
{
	const std::string names[3] = {"Billy", "Bob", "Torton"};
	const std::string types[3] = {"Boomer", "Tank", "Hunter"};
	Zombie RandomKent = Zombie(types[std::rand() % 3], names[rand() % 3]);
	return (RandomKent);
}

ZombieHorde::ZombieHorde(int N):number(N)
{
	Zombie hord[N];
	//this->Zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		hord[i] = randomChump();
	Zombies = hord;
}

ZombieHorde::~ZombieHorde()
{
	//delete [] this->Zombies;
}
