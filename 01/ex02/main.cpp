#include "ZombieEvent.hpp"

Zombie	*randomChump()
{
	const std::string names[3] = {"Billy", "Bob", "Torton"};
	const std::string types[3] = {"Boomer", "Tank", "Hunter"};
	Zombie *RandomKent = new Zombie(types[std::rand() % 3], names[rand() % 3]);
	RandomKent->announce();
	return (RandomKent);
}

int main(void)
{
	srand(time(0));
	ZombieEvent Carnaval;
	Zombie		*Me;
	Carnaval.setZombieType("boomber");
	Zombie *Frank = Carnaval.newZombie("Frank");
	Frank->announce();
	delete Frank;
	Me = randomChump();
	delete Me;
	Me = randomChump();
	delete Me;
	Me = randomChump();
	delete Me;
	Me = randomChump();
	delete Me;
	Me = randomChump();
	delete Me;
	return 0;
}
