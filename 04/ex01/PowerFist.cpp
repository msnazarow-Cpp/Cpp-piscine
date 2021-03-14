#include "PowerFist.hpp"
#include <string>
#include <iostream>

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}
