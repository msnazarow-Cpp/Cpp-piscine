#include "Character.hpp"
#include <string>

Character::Character(std::string name):_name(name)
{

}

std::string const & Character::getName() const
{
	return _name;
}
