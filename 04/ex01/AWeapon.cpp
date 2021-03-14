#include "AWeapon.hpp"

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const {
	return (name);
}

int AWeapon::getAPCost() const {
	return (apcost);
}

int AWeapon::getDamage() const {
	return (damage);
}

AWeapon &AWeapon::operator=(AWeapon &a) {
	name = a.name;
	damage = a.damage;
	apcost = a.apcost;
	return (*this);
}

AWeapon::AWeapon(AWeapon &a)
{
	*this = a;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage):name(name),damage(damage),apcost(apcost)
{

}
