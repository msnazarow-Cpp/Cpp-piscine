#pragma once
#include <string>
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string const &name);
	virtual ~FragTrap();
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	int vaulthunter_dot_exe(std::string const & target);
	static const unsigned int startHitpoints = 100;
	static const unsigned int startMaxhitpoints = 100;
	static const int startEnergypoints = 100;
	static const int startMaxenegrypoints = 100;
	static const int startMelee = 30;
	static const int startRanged = 20;
	static const unsigned int startArmor = 5;

};