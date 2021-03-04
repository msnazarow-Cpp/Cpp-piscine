#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *Billy = new Zombie(this->type, name);
	return (Billy);
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}
