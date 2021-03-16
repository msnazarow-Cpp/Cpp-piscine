#pragma once
#include "IMateriaSource.hpp"
class MateriaSource: public IMateriaSource
{
private:
	AMateria *_learned[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource &operator=(const MateriaSource &);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
