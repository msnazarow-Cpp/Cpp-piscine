#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):name(name),damage(damage),apcost(apcost){}

AWeapon::~AWeapon(){}

AWeapon &AWeapon::operator=(const AWeapon &a) {
	name = a.name;
	damage = a.damage;
	apcost = a.apcost;
	return (*this);
}

AWeapon::AWeapon(const AWeapon &a)
{
	*this = a;
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
