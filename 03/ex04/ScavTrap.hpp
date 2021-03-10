#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &);
	~ScavTrap();
	void challengeNewcomer();
};