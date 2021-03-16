#pragma once
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
	/* data */
public:
	SuperMutant(/* args */);
	SuperMutant(const SuperMutant &);
	SuperMutant &operator=(const SuperMutant &);
	~SuperMutant();
	void takeDamage(int);
};