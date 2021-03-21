#pragma once
#include "IMiningLaser.hpp"

class StripMiner: public IMiningLaser
{
	public:
		StripMiner();
		StripMiner(const StripMiner & miner);
		StripMiner &operator=(const StripMiner & miner);
		void mine(IAsteroid*);
		~StripMiner();
};