#include "Yourmama.hpp"
#include <iostream>

Yourmama::Yourmama(std::string name):Victim(name)
{
	std::cout << "Have you eaten?\n";
}

Yourmama::Yourmama(const Yourmama &a):Victim(a)
{
	std::cout << "Have you eaten?\n";
}

Yourmama& Yourmama::operator=(const Yourmama &a)
{
	Victim::operator=(a);
	return (*this);
}

void Yourmama::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a dishwasher!\n";
}

Yourmama::~Yourmama()
{
	std::cout << "Don't forget to put on your hat...\n";
}
