#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>


class Character: public ICharacter
{
private:
	AMateria *_mat;
	std::string _name;
public:
	Character(std::string name);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
