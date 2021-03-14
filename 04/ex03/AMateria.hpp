#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#pragma once
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);

		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif // __AMATERIA_H__