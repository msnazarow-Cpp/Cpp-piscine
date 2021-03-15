#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &a):AWeapon(a)
{

}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &a)
{
	AWeapon::operator=(a);
	return(*this);
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
