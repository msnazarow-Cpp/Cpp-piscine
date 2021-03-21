#pragma once
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion &operator=(const RadScorpion &);
	~RadScorpion();
};