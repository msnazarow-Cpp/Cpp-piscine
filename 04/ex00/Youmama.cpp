#include "Yourmama.hpp"
#include <iostream>

Yourmama::Yourmama(std::string name):Victim(name)
{
	std::cout << "Have you eaten?\n";
}

void Yourmama::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a dishwasher!\n";
}

Yourmama::~Yourmama()
{
	std::cout << "Don't forget to put on your hat...\n";
}
