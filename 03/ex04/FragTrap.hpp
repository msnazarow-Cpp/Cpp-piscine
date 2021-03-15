#pragma once
#include <string>
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	int vaulthunter_dot_exe(std::string const & target);
};