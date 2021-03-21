#pragma once
#include <string>

class FragTrap
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
	FragTrap(std::string const & name);
	~FragTrap();
	FragTrap(const FragTrap &);
	int rangedAttack(std::string const &);
	int meleeAttack(std::string const &);
	int takeDamage(unsigned int);
	int beRepaired(unsigned int);
	int vaulthunter_dot_exe(std::string const & target);

	std::string &getName();
	FragTrap &operator = (const FragTrap &);
};