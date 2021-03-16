#include "Comet.hpp"

std::string Comet::beMined(DeepCoreMiner * __attribute__ ((unused)) laser) const
{
	return ("Meium");
}

std::string Comet::beMined(StripMiner * __attribute__ ((unused)) laser) const
{
	return ("Tartarite");
}

std::string Comet::getName() const
{
	return ("Comet");
}

Comet::~Comet()
{

}

Comet::Comet()
{

}

Comet::Comet(const Comet & asteroid)
{
	*this = asteroid;
}

Comet& Comet::operator=(const Comet & asteroid)
{
	IAsteroid::operator=(asteroid);
	return (*this);
}
