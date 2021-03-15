#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice()
	: AMateria("ice")
{

}

Ice::Ice(const Ice &a):AMateria(a)
{

}

Ice& Ice::operator=(const Ice &a)
{
	AMateria::operator=(a);
	return (*this);
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}

Ice* Ice::clone() const
{
	return(new Ice(*this));
}
