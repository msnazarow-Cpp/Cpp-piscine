#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with " << weapon->getType() << std::endl;
}
