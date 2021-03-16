#pragma once
#include "IMiningLaser.hpp"

class StripMiner: public IMiningLaser
{
private:
	/* data */
public:
	StripMiner(/* args */);
	StripMiner(const StripMiner & miner);
	StripMiner &operator=(const StripMiner & miner);
	void mine(IAsteroid*);
	~StripMiner();
};