#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>

RadScorpion::RadScorpion(/* args */):Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}
