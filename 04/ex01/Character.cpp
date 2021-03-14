#include "Character.hpp"
#include <iostream>


Character::Character(std::string const & name):name(name),ap(40),weapon(0)
{
}

Character::~Character()
{
}

void Character::recoverAP()
{
	ap += 10;
}

void Character::equip(AWeapon* weapon) {
	this->weapon = weapon;
}

int Character::getAp() const {
	return ap;
}

void Character::attack(Enemy* enemy)
{
	if (weapon) {
		if (ap > weapon->getAPCost())
		{
			ap -= weapon->getAPCost();
			std::cout << name <<" attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
			weapon->attack();
			enemy->takeDamage(weapon->getDamage());
		}
		else
			std::cout << name << " have only " << ap << " AP but " << weapon->getName() << " requires " << weapon->getAPCost() << " AP!\n";
	}
	if (enemy->getHP() == 0)
	{
		std::cout << name << " kills " << enemy->getType() << std::endl;
		delete enemy;
	}
}

std::string Character::getName() const
{
	return (name);
}

AWeapon *Character::getWeapon() const {
	return weapon;
}

std::ostream& operator << (std::ostream &stream, Character & a)
{
	if (a.getWeapon())
		stream << a.getName() << " has " << a.getAp() << " AP and wields a " << a.getWeapon()->getName() << std::endl;
	else
		stream << a.getName() << " has " << a.getAp() << " AP and is unarmed\n";
	return (stream);
}
