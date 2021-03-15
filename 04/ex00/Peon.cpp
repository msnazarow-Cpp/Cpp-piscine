#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name):Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &a):Victim(a)
{
	std::cout << "Zog zog.\n";
}

Peon& Peon::operator=(const Peon &a)
{
	Victim::operator=(a);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}
