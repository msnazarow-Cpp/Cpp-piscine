#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>

RadScorpion::RadScorpion(/* args */):Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &a):Enemy(a)
{

}

RadScorpion& RadScorpion::operator=(const RadScorpion &a)
{
	Enemy::operator=(a);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}
