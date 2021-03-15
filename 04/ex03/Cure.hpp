#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
private:
	/* data */
public:
	Cure();
	~Cure();
	void use(ICharacter& target);
	Cure* clone() const;
	Cure(const Cure &);
	Cure &operator=(const Cure &);
};