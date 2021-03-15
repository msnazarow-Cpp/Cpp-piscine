#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource& MateriaSource::operator=(const MateriaSource &a)
{
	IMateriaSource::operator=(a);
	return (*this);
}

MateriaSource::MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	type.c_str();
	return (NULL);
}
