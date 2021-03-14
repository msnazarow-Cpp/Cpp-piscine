#include "IMateriaSource.hpp"



class MateriaSource
{
private:
	AMateria *_learned;
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
