#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string const & name, std::string const & title):name(name),title(title)
{
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &a)
{
	*this = a;
	std::cout << name << ", " << title << ", is born!\n";
}

std::string Sorcerer::getName() const {
	return name;
}

void Sorcerer::setName(const std::string &value) {
	name = value;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &a)
{
	name = a.name;
	title = a.title;
	return (*this);
}

std::string Sorcerer::getTitle() const {
	return title;
}

void Sorcerer::setTitle(const std::string &value) {
	title = value;
}

void Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead.Consequences will never be the same!\n";
}

std::ostream &operator<<(std:: ostream &stream, Sorcerer &a) {
	stream << "I am " << a.getName() << ", " << a.getTitle() << ", and I like ponies!\n";
	return (stream);
}
