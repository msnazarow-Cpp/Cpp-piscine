#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include <iostream>

SuperMutant::SuperMutant(/* args */):Enemy(170, "Super Mutant")
{
	std::cout <<  "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
}
