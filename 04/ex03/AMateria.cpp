#include "AMateria.hpp"

void AMateria::use(ICharacter& target)
{
	_xp += 10;
}

AMateria::AMateria(std::string const & type):_xp(10)
{

}

std::string const & AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}
