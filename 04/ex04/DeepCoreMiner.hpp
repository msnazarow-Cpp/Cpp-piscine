#pragma once
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class DeepCoreMiner: public IMiningLaser
{
private:
	/* data */
public:
	DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner & miner);
	DeepCoreMiner &operator=(const DeepCoreMiner & miner);
	void mine(IAsteroid*);
	~DeepCoreMiner();
};