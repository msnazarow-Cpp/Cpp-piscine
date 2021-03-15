#include "Character.hpp"
#include <string>

Character::Character(std::string name):_name(name)
{
	for (int i = 0 ; i < 4; i++)
		_mat[i] = NULL;
}

Character::Character(const Character &a)
{
	*this = a;
}

Character& Character::operator=(const Character &a)
{
	for (int i = 0; i < 4; i++)
		_mat[i]= a._mat[i];
	_name = a._name;
	return (*this);
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (_mat[i] == NULL){
			_mat[i] = m;
			break;}
}

void Character::unequip(int idx)
{
	_mat[idx] = 0;
}


void Character::use(int idx, ICharacter& target)
{
	_mat[idx]->use(target);
}
