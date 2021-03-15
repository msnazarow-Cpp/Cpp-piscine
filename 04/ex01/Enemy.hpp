#pragma once
#include <string>

class Enemy
{
private:
	int hp;
	std::string type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &a);
	Enemy &operator=(const Enemy &a);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);

	void setHp(int value);
};