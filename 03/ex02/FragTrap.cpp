#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(std::string const &name):ClapTrap(name) {
	setType("FR4G-TP ");
	setHitpoints(100);
	setMaxhitpoints(100);
	setLevel(1);
	setEnergypoints(100);
	setMaxenegrypoints(100);
	setMelee(30);
	setRanged(20);
	setArmor(5);
	std::cout << "FR4G-TP " << name << " is Alive!\n";}

FragTrap::FragTrap(const FragTrap &a):ClapTrap(a)
{
	std::cout << "FR4G-TP " << getName() << " is Alive!\n";
}

FragTrap& FragTrap::operator=(const FragTrap &a)
{
	ClapTrap::operator=(a);
	return(*this);
}

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP " << getName() << " Dies and you can do Nothing!\n";}

int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (getHitpoints() > 0){
		if (getEnergypoints() < 20)
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