#pragma once
#include <string>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
	private:
		unsigned int _xp;
		std::string _type;

	public:
		AMateria(std::string const & type);

		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria &operator=(const AMateria &);
		AMateria(const AMateria &a);
};