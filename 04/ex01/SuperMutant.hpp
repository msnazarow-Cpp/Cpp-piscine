#pragma once
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant &operator=(const SuperMutant &);
	~SuperMutant();
	void takeDamage(int);
};