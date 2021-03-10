#pragma once
#include <string>

class ScavTrap
{
private:
	std::string name;
	unsigned int hitpoints;
	unsigned int maxhitpoints;
	int energypoints;
	int maxenegrypoints;
	int level;
	int melee;
	int ranged;
	unsigned int armor;
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap &);
	int rangedAttack(std::string const &);
	int meleeAttack(std::string const &);
	int takeDamage(unsigned int);
	int beRepaired(unsigned int);
	void challengeNewcomer();
	std::string &getName();
	ScavTrap &operator = (const ScavTrap &);

};