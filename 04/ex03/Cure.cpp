#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
Cure::Cure()
	: AMateria("cure")
{

}

Cure& Cure::operator=(const Cure &a)
{
	AMateria::operator=(a);
	return (*this);
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	return(new Cure(*this));
}

Cure::Cure(const Cure &a):AMateria("cure")
{
	(*this) = a;
}

Cure::~Cure()
{

}