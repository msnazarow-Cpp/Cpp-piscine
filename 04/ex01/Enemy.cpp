#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type):hp(hp),type(type)
{

}

Enemy::~Enemy()
{

}

std::string Enemy::getType() const
{
	return (type);
}

int Enemy::getHP() const
{
	return (hp);
}

void Enemy::takeDamage(int damage)
{
	if (hp < damage)
		hp = 0;
	else if (damage > 0)
		hp -= damage;
}

void Enemy::setHp(int value) {
	hp = value;
}
