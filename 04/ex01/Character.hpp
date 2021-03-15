#pragma once
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string name;
		int ap;
		AWeapon *weapon;
	public:
	Character(std::string const & name);
	Character(const Character &);
	Character &operator=(const Character &);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;

	int getAp() const;

	AWeapon *getWeapon() const;

};

std::ostream &operator << (std::ostream &stream, Character & a);