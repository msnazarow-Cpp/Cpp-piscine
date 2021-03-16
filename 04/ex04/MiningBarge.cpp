#include "MiningBarge.hpp"

void MiningBarge::equip(IMiningLaser *laser)
{
	for (int i = 0; i < 4; i++)
		if (_lasers[i] == 0)
		{
			_lasers[i] = laser;
			break;
		}
}

void MiningBarge::mine(IAsteroid *aster) const
{
	for (int i = 0; i < 4; i++)
		if (_lasers[i])
			_lasers[i]->mine(aster);
}

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_lasers[i] = 0;
}


MiningBarge::~MiningBarge()
{
	for (int i = 0; i < 4; i++)
		delete _lasers[i];
}

MiningBarge& MiningBarge::operator = (const MiningBarge &barge)
{
	for (int i = 0; i < 4; i++)
		_lasers[i] = barge._lasers[i];
	return (*this);
}

MiningBarge::MiningBarge(const MiningBarge & barge)
{
	*this = barge;
}
