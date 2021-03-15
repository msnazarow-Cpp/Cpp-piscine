#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &);
	void challengeNewcomer();
};