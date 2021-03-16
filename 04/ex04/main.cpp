#include "MiningBarge.hpp"
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

int main()
{
	MiningBarge barge;
	Asteroid *aster = new Asteroid;
	Comet *comet = new Comet;
	barge.equip(new DeepCoreMiner);
	barge.equip(new StripMiner);
	barge.mine(aster);
	barge.mine(comet);
	delete aster;
	delete comet;
	return 0;
}
