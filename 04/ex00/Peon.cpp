#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name):Victim(name)
{
	std::cout << "Zog zog.\n";
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}
