#include "IMateriaSource.hpp"
class MateriaSource: public IMateriaSource
{
private:
	AMateria *_learned;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource &operator=(const MateriaSource &);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
