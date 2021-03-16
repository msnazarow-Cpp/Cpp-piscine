#pragma once
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Comet : public IAsteroid
{
private:
	/* data */
public:
	Comet();
	Comet(const Comet & asteroid);
	Comet &operator=(const Comet & asteroid);
	std::string beMined(DeepCoreMiner * laser) const;
	std::string beMined(StripMiner * laser) const;
	std::string getName() const;
	~Comet();
};