#pragma once
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Asteroid : public IAsteroid
{
	public:
		Asteroid();
		Asteroid(const Asteroid &asteroid);
		Asteroid &operator=(const Asteroid &asteroid);
		std::string beMined(DeepCoreMiner *laser) const;
		std::string beMined(StripMiner *laser) const;
		std::string getName() const;
		~Asteroid();
};