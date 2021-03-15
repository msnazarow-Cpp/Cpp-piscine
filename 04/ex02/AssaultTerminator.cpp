#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
	: ISpaceMarine()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator&a)
{
	ISpaceMarine::operator=(a);
	return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator&a):ISpaceMarine(a)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator *AssaultTerminator::clone() const {
	AssaultTerminator *marine = new AssaultTerminator;
	return (marine);
}

void	AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
