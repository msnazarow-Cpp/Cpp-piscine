#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(std::string name):ClapTrap(name) {
	this->setType("FR4G-TP ");
	this->setHitpoints(100);
	this->setMaxhitpoints(100);
	this->setLevel(1);
	this->setEnergypoints(100);
	this->setMaxenegrypoints(100);
	this->setMelee(30);
	this->setRanged(20);
	this->setArmor(5);
	std::cout << getType() << name << " is Alive!\n";}

FragTrap::FragTrap(const FragTrap &a):ClapTrap(a)
{
	std::cout << getType() << getName() << " is Alive!\n";
}

FragTrap& FragTrap::operator=(const FragTrap &a)
{
	ClapTrap::operator=(a);
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << getType() << getName() << " Dies and you can do Nothing!\n";}

int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (getHitpoints() > 0){	if (getEnergypoints() < 20)
	{std::cout << getType() << getName() << " can't attack cause he is out of energy!\n"; return (0);}
	std::string attacks[] = {"Omae wa mo shinderu", "Nani?", "Kisama", "Sugoy!", "Sasageo!", "Namae wa Yohan"};
	int i = std::rand() % 6;
	int damages[] = {30, 5, 15, 5, 10, 20};
		setEnergypoints(getEnergypoints() - 20);
		std::cout << getType() << getName() << " attacks " << target << " shouting: "
		<< attacks[i] << " causing " << damages[i] << " points of damage!\n";
	return (damages[i]);}

	std::cout << getType() << getName() << " can't attack cause he is dead!\n";
	return (0);
}