#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource& MateriaSource::operator=(const MateriaSource &a)
{
	for (int i = 0; i < 4; i++)
		_learned[i] = a._learned[i];
	return (*this);
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
	*this = a;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _learned[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (_learned[i] == NULL)
		{
			_learned[i] = m;
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_learned[i] && _learned[i]->getType() == type)
			return(_learned[i]->clone());
	return (NULL);
}
