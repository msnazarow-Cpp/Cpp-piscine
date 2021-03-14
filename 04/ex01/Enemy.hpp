#pragma once
#include <string>

class Enemy
{
private:
	int hp;
	std::string type;
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);

	void setHp(int value);
};