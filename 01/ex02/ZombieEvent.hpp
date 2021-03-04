#pragma once
#include "Zombie.hpp"
class ZombieEvent
{
private:
	std::string type;
public:

	ZombieEvent(/* args */);
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
};
