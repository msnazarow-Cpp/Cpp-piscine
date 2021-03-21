#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(std::string const & name):
	name(name),hitpoints(100), maxhitpoints(100), energypoints(100),
	maxenegrypoints(100), level(1), melee(30), ranged(20), armor(5) {
	std::cout << "FR4G-TP " << name << " is Alive!\n";}

FragTrap::FragTrap(const FragTrap &a)
{
	*this = a;
}

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP " << name << " Dies and you can do Nothing!\n";}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
	hitpoints = a.hitpoints;
	maxenegrypoints = a.maxhitpoints;
	energypoints = a.energypoints;
	level = a.level;
	name = a.name;
	melee = a.melee;
	ranged = a.ranged;
	armor = a.armor;
	return (*this);
}

int FragTrap::meleeAttack(std::string const &target){
	if(hitpoints > 0){
		std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing "<< melee << " points of damage!\n";
		return (melee);}
	std::cout << "FR4G-TP " << name << " can't attack cause he is dead!\n";
	return (0);
}

int FragTrap::rangedAttack(std::string const &target){
	if (hitpoints > 0){
		std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing "<< ranged << " points of damage!\n";
		return (ranged);}
	std::cout << "FR4G-TP " << name << " can't attack cause he is dead!\n";
	return (0);
}

int	FragTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0)	{
		std::cout << "FR4G-TP " << name << " can't get damage, cause he's already dead!\n";
		amount = 0;
	} else if (amount > armor)	{
		amount -= armor;
		if (hitpoints > amount){
			std::cout << "FR4G-TP " << name << " gets " << amount << " damage!\n";
			hitpoints -= amount;}
		else {
			std::cout << "FR4G-TP " << name << " gets " << hitpoints << " damage and now he is dead!\n";
			amount = hitpoints;
			hitpoints = 0;}
	}	else	{
		amount = 0;
		std::cout << "FR4G-TP " << name << " is very strong, you can't hit him!\n";
	}
	return (amount);
}

int FragTrap::beRepaired(unsigned int amount){
	if (hitpoints == 0)	{
		std::cout << "FR4G-TP " << name << " can't be rapaired, cause he's already dead!\n";
		amount = 0;
	} else if (hitpoints == maxhitpoints){
		std::cout << "FR4G-TP " << name << " can't be rapaired, cause he has maxhealth!\n";
	} else if (maxhitpoints - hitpoints > amount){
			std::cout << "FR4G-TP " << name << " repaired " << amount << " health!\n";
			hitpoints += amount;}
		else {
			std::cout << "FR4G-TP " << name << " gets " << maxhitpoints - hitpoints << " damage and now he is dead!\n";
			amount = maxhitpoints - hitpoints;
			hitpoints = maxhitpoints;}
	return (amount);
}
int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (hitpoints > 0){	if (energypoints < 20)
	{std::cout << "FR4G-TP " << name << " can't attack cause he is out of energy!\n"; return (0);}
	std::string attacks[] = {"Omae wa mo shinderu", "Nani?", "Kisama", "Sugoy!", "Sasageo!", "Namae wa Yohan"};
	int i = std::rand() % 6;
	int damages[] = {30, 5, 15, 5, 10, 20};
		energypoints -= 20;
		std::cout << "FR4G-TP " << name << " attacks " << target << " shouting: "
		<< attacks[i] << " causing " << damages[i] << " points of damage!\n";
	return (damages[i]);}

	std::cout << "FR4G-TP " << name << " can't attack cause he is dead!\n";
	return (0);
}

std::string &FragTrap::getName()
{
	return (name);
}