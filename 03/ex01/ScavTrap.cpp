#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(std::string name):
	name(name),hitpoints(100), maxhitpoints(100), energypoints(50),
	maxenegrypoints(50), level(1), melee(20), ranged(15), armor(3) {
	std::cout << "SC4V-TP " << name << " is Alive!\n";}

ScavTrap::ScavTrap(ScavTrap &a)
{
	*this = a;
}

ScavTrap::~ScavTrap(){
	std::cout << "SC4V-TP " << name << " Dies and you can do Nothing!\n";}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
	this->hitpoints = a.hitpoints;
	this->maxenegrypoints = a.maxhitpoints;
	this->energypoints = a.energypoints;
	this->level = a.level;
	name = a.name;
	melee = a.melee;
	ranged = a.ranged;
	armor = a.armor;
	return (*this);
}

int ScavTrap::meleeAttack(std::string const &target){
	if(hitpoints > 0){ std::cout << "SC4V-TP " << name << " attacks " << target << " at melee, causing "<< melee << " points of damage!\n";
	return (melee);}
	std::cout << "SC4V-TP " << name << " can't attack cause he is dead!\n";
	return (0);
}

int ScavTrap::rangedAttack(std::string const &target){
	if (hitpoints > 0){
	std::cout << "SC4V-TP " << name << " attacks " << target << " at range, causing "<< ranged << " points of damage!\n";
	return (ranged);}
	std::cout << "SC4V-TP " << name << " can't attack cause he is dead!\n";
	return (0);
}

int	ScavTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0)	{
		std::cout << "SC4V-TP " << name << " can't get damage, cause he's already dead!\n";
		amount = 0;
	} else if (amount > armor)	{
		amount -= armor;
		if (hitpoints > amount){
			std::cout << "SC4V-TP " << name << " gets " << amount << " damage!\n";
			hitpoints -= amount;}
		else {
			std::cout << "SC4V-TP " << name << " gets " << hitpoints << " damage and now he is dead!\n";
			amount = hitpoints;
			hitpoints = 0;}
	}	else	{
		amount = 0;
		std::cout << "SC4V-TP " << name << " is very strong, you can't hit him!\n";
	}
	return (amount);
}

int ScavTrap::beRepaired(unsigned int amount){
	if (hitpoints == 0)	{
		std::cout << "SC4V-TP " << name << " can't be rapaired, cause he's already dead!\n";
		amount = 0;
	} else if (hitpoints == maxhitpoints){
		std::cout << "SC4V-TP " << name << " can't be rapaired, cause he has maxhealth!\n";
	} else if (maxhitpoints - hitpoints > amount){
			std::cout << "SC4V-TP " << name << " repaired " << amount << " health!\n";
			hitpoints += amount;}
		else {
			std::cout << "SC4V-TP " << name << " gets " << maxhitpoints - hitpoints << " damage and now he is dead!\n";
			amount = maxhitpoints - hitpoints;
			hitpoints = maxhitpoints;}
	return (amount);
}
void	ScavTrap::challengeNewcomer()
{
	std::string challenges[] = {"Get some health", "Get recover form death", "Hit yourself!", "Kick yourself!"};
	int i = std::rand() % 4;
	unsigned int amount = std::rand() % 25 + 5;

	if (hitpoints > 0){	if (energypoints < 10){
		std::cout << "SC4V-TP " << name << " can't challenge cause he is out of energy!\n"; return ;}
		energypoints -= 10;
		std::cout << "SC4V-TP " << name << " challenges \"" << challenges[i] << "\" with " << amount << " amount!\n";
		if (i < 2)
			beRepaired(amount);
		else
			takeDamage(amount);
	return ;}
	if (i == 1)
	{std::cout << "SC4V-TP " << name << " got " << challenges[i] << " challenge and now he is alive again!\n";
		hitpoints += std::min(maxhitpoints, amount);}
	return ;
}

std::string &ScavTrap::getName()
{
	return (name);
}