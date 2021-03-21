#pragma once
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
	/* data */
public:
	NinjaTrap(std::string const &name);
	virtual ~NinjaTrap();
	NinjaTrap(const NinjaTrap &);
	NinjaTrap &operator=(const NinjaTrap &);
	void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(ScavTrap &);
	void ninjaShoebox(FragTrap &);
	void ninjaShoebox(NinjaTrap &);
	static const unsigned int startHitpoints = 60;
	static const unsigned int startMaxhitpoints = 60;
	static const int startEnergypoints = 120;
	static const int startMaxenegrypoints = 120;
	static const int startMelee = 60;
	static const int startRanged = 5;
	static const unsigned int startArmor = 0;
};
