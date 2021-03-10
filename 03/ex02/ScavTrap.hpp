#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &);
	~ScavTrap();
	void challengeNewcomer();
};