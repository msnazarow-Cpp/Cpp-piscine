#pragma once
#include <string>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string const &name);
	~FragTrap();
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	int vaulthunter_dot_exe(std::string const & target);
};