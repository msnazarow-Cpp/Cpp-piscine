#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name):ClapTrap(name),FragTrap(name),NinjaTrap(name)
{
	setType("SUPR-TP ");
	setHitpoints(100);
	setMaxhitpoints(100);
	setEnergypoints(120);
	setMaxenegrypoints(120);
	setLevel(1);
	setMelee(60);
	setRanged(20);
	setArmor(5);
	std::cout << "SUPR-TP " << name << " is Alive!\n";
}

SuperTrap::SuperTrap(const SuperTrap &a):ClapTrap(a),FragTrap(a),NinjaTrap(a)
{
	std::cout << "SUPR-TP " << getName () << " is Alive!\n";
}

SuperTrap &SuperTrap::operator=(const SuperTrap &a)
{
	ClapTrap::operator=(a);
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPR-TP " << getName() << " Dies and you can do Nothing!\n";
}

void SuperTrap::ninjaShoebox(SuperTrap &a)
{
	vaulthunter_dot_exe(a.getName());
}