#include "StripMiner.hpp"
#include "IAsteroid.hpp"
#include <iostream>

void StripMiner::mine(IAsteroid* miner)
{
	std::cout << "* strip mining... got "<< miner->beMined(this) <<"! *" << std::endl;
}

StripMiner::~StripMiner(){}

StripMiner::StripMiner(){}

StripMiner::StripMiner(const StripMiner & miner)
{
	*this = miner;
}

StripMiner& StripMiner::operator=(const StripMiner & miner)
{
	IMiningLaser::operator=(miner);
	return (*this);
}
