#include "Asteroid.hpp"


std::string Asteroid::beMined(StripMiner * __attribute__ ((unused))laser) const
{
	return ("Flavium");
}

std::string Asteroid::beMined(DeepCoreMiner * __attribute__ ((unused)) laser) const
{
	return ("Dragonite");
}

std::string Asteroid::getName() const
{
	return("Asteroid");
}

Asteroid::~Asteroid(){}

Asteroid::Asteroid(){}

Asteroid::Asteroid(const Asteroid &asteroid)
{
	*this = asteroid;
}

Asteroid& Asteroid::operator=(const Asteroid &asteroid)
{
	IAsteroid::operator=(asteroid);
	return (*this);
}
