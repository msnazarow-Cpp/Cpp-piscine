#pragma once
#include <string>

class AWeapon
{
private:
	std::string name;
	int damage;
	int apcost;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &);
	virtual ~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon &operator=(const AWeapon &);
};