#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Yourmama.hpp"
#include <iostream>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Yourmama mama("Mama");
	std::cout << robert << jim << joe << mama;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(mama);
	return 0;
}