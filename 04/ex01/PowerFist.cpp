#include "PowerFist.hpp"
#include <string>
#include <iostream>

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &a):AWeapon(a)
{

}

PowerFist& PowerFist::operator=(const PowerFist &a)
{
	AWeapon::operator=(a);
	return(*this);
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}
