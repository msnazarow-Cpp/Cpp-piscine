#include "AMateria.hpp"

void AMateria::use(ICharacter& __attribute__((unused))target)
{
	_xp += 10;
}

AMateria& AMateria::operator=(const AMateria &a)
{
	_xp=a._xp;
	return (*this);
}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
}

AMateria::AMateria(std::string const & type):_xp(10),_type(type)
{

}

std::string const & AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}
