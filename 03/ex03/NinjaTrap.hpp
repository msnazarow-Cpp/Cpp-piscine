#pragma once
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public ClapTrap
{
private:
	/* data */
public:
	NinjaTrap(std::string const & name);
	~NinjaTrap();
	NinjaTrap(const NinjaTrap &);
	NinjaTrap &operator=(const NinjaTrap &);
	void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(ScavTrap &);
	void ninjaShoebox(FragTrap &);
	void ninjaShoebox(NinjaTrap &);
};
