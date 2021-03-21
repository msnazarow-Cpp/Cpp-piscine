#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(std::string const &name):ClapTrap(name){
	setType("SC4V-TP ");
	setHitpoints(100);
	setMaxhitpoints(100);
	setLevel(1);
	setEnergypoints(50);
	setMaxenegrypoints(50);
	setMelee(20);
	setRanged(15);
	setArmor(3);
	std::cout << "SC4V-TP " << name << " is Alive!\n";}

ScavTrap::ScavTrap(const ScavTrap &a):ClapTrap(a)
{
	std::cout << "SC4V-TP " << getName() << " is Alive!\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &a)
{
	ClapTrap::operator=(a);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "SC4V-TP " << getName() << " Dies and you can do Nothing!\n";}

void	ScavTrap::challengeNewcomer()
{
	std::string challenges[] = {"Get some health", "Get recover from death", "Hit yourself!", "Kick yourself!"};
	int i = std::rand() % 4;
	unsigned int amount = std::rand() % 25 + 5;

	if (getHitpoints() > 0){
		if (getEnergypoints() < 10){
			std::cout << getType() << getName() << " can't challenge cause he is out of energy!\n"; return ;}
		setEnergypoints(getEnergypoints() - 10);
		std::cout << getType() << getName() << " challenges \"" << challenges[i] << "\" with " << amount << " amount!\n";
		if (i < 2)
			beRepaired(amount);
		else
			takeDamage(amount);
		return ;}
	if (i == 1){
		std::cout << getType() << getName() << " got " << challenges[i] << " challenge and now he is alive again!\n";
		setHitpoints(getHitpoints() + std::min(getMaxhitpoints(), amount));}
	return ;
}
