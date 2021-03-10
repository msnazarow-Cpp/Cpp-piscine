#pragma once
#include <string>
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap &);
	int vaulthunter_dot_exe(std::string const & target);
};