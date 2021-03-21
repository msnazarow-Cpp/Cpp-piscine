#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string const &name):ClapTrap(name),FragTrap(name),NinjaTrap(name)
{
	setType("SUPR-TP ");
	setHitpoints(FragTrap::startHitpoints);
	setMaxhitpoints(FragTrap::startMaxhitpoints);
	setEnergypoints(NinjaTrap::startEnergypoints);
	setMaxenegrypoints(NinjaTrap::startMaxenegrypoints);
	setLevel(1);
	setMelee(NinjaTrap::startMelee);
	setRanged(FragTrap::startRanged);
	setArmor(FragTrap::startArmor);
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