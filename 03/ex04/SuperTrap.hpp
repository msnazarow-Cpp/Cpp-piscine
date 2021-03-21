#pragma once
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap , public NinjaTrap
{
private:
	/* data */
public:
	void ninjaShoebox(SuperTrap &);
	SuperTrap(std::string const &name);
	SuperTrap(const SuperTrap &);
	SuperTrap &operator=(const SuperTrap &a);
	~SuperTrap();
};