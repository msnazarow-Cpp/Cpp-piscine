#ifndef __NINJATRAP_H__
#define __NINJATRAP_H__
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
	/* data */
public:
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap &);
	void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(ScavTrap &);
	void ninjaShoebox(FragTrap &);
	void ninjaShoebox(NinjaTrap &);
};
#endif // __NINJATRAP_H__