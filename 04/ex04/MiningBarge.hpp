#pragma once
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
	private:
		IMiningLaser *_lasers[4];
	public:
	MiningBarge();
	~MiningBarge();
	MiningBarge &operator = (const MiningBarge &);
	MiningBarge(const MiningBarge &);
	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;
};