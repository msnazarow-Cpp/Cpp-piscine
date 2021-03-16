#pragma once
#include <string>
class StripMiner;
class DeepCoreMiner;
class IMiningLaser;

class IAsteroid
{
	public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(StripMiner *) const = 0;
	virtual std::string beMined(DeepCoreMiner *) const = 0;
	virtual std::string getName() const = 0;
};