#include "Zombie.hpp"
#include <iostream>

void Zombie::announce()
{
	std::cout << '<' << this->name << " (" << this->type << ")> All...\n";
	std::cout << '<' << this->name << " (" << this->type << ")> We...\n";
	std::cout << '<' << this->name << " (" << this->type << ")> Want to do ...\n";
	std::cout << '<' << this->name << " (" << this->type << ")> is eat your...\n";
	std::cout << '<' << this->name << " (" << this->type << ")> Braiiiiiiinnnssss...\n";
}

Zombie::Zombie(std::string type, std::string name):
	name(name), type(type){}

Zombie::~Zombie()
{
}
