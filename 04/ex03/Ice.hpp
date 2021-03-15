#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
private:
	/* data */
public:
	Ice();
	Ice(const Ice &a);
	Ice &operator=(const Ice &a);
	~Ice();
	void use(ICharacter& target);
	Ice* clone() const;
};