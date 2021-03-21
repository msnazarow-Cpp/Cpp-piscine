#include "NinjaTrap.hpp"
#include <iostream>
#include <cstdlib>

NinjaTrap::NinjaTrap(std::string const &name):ClapTrap(name)
{
	setType("INAC-TP ");
	setHitpoints(60);
	setMaxhitpoints(60);
	setLevel(1);
	setEnergypoints(120);
	setMaxenegrypoints(120);
	setMelee(60);
	setRanged(5);
	setArmor(0);
	std::cout << "INAC-TP " << name << " is Alive!\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "INAC-TP " << getName() << " Dies and you can do Nothing!\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &a):ClapTrap(a)
{
	std::cout << "INAC-TP " << getName() << " is Alive!\n";
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &a)
{
	ClapTrap::operator=(a);
	return (*this);
}

void NinjaTrap::ninjaShoebox(ClapTrap &a)
{
	a.takeDamage(meleeAttack(a.getName()));
}

void NinjaTrap::ninjaShoebox(ScavTrap &a)
{
	a.takeDamage(rangedAttack(a.getName()));
}

void NinjaTrap::ninjaShoebox(FragTrap &a)
{
	int i = std::rand() % 20 + 10;
	std::cout << getType() << getName() << " health " << a.getName() << " with " << i <<" amount!\n";
	a.beRepaired(i);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &a)
{
	a.setLevel(getLevel() + 1);
	std::cout << getType() << getName() << " uppers " << a.getName() << " level to " << a.getLevel() << "!\n";
}