#include "DeepCoreMiner.hpp"
#include <iostream>

void DeepCoreMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* mining deep... got "<< asteroid->beMined(this) << "! *" << std::endl;
}

DeepCoreMiner::~DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner & miner)
{
	*this = miner;
}

DeepCoreMiner& DeepCoreMiner::operator=(const DeepCoreMiner & miner)
{
	IMiningLaser::operator=(miner);
	return (*this);
}
