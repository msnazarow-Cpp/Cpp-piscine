#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name):name(name)
{
	std::cout <<"Some random victim called "<< name <<" just appeared!\n";
}

Victim::Victim(const Victim &a)
{
	*this = a;
	std::cout <<"Some random victim called "<< name <<" just appeared!\n";
}

std::string Victim::getName() const {
	return name;
}

void Victim::setName(const std::string &value) {
	name = value;
}

void Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep!\n";
}

Victim &Victim::operator = (const Victim &a)
{
	name = a.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

std::ostream &operator<<(std:: ostream &stream, Victim &a) {
	stream << "I am " << a.getName() << " and I like otters!\n";
	return (stream);
}
