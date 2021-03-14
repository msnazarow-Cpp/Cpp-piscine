#include "Ice.hpp"
#include <iostream>

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}
