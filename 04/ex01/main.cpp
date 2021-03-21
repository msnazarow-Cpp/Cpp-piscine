#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include <iostream>

int main()
{
	Character* Samurai = new Character("Samurai");
	Enemy* radscp = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << *Samurai;

	Samurai->equip(pr);
	std::cout << *Samurai;
	Samurai->attack(radscp);
	std::cout << *Samurai;
	Samurai->attack(radscp);
	std::cout << *Samurai;
	Samurai->attack(radscp);
	std::cout << *Samurai;
	Samurai->attack(radscp);
	std::cout << *Samurai;
	std::cout << "Continue ? ";
	std::cin.get();
	Enemy* supmt = new SuperMutant();
	Samurai->equip(pf);
	std::cout << *Samurai;
	Samurai->attack(supmt);
	std::cout << *Samurai;
	Samurai->attack(supmt);
	std::cout << *Samurai;
	Samurai->attack(supmt);
	std::cout << "Continue ? ";
	std::cin.get();
	Samurai->recoverAP();
	Samurai->recoverAP();
	Samurai->recoverAP();
	Samurai->recoverAP();
	std::cout << *Samurai;
	Samurai->attack(supmt);
	std::cout << *Samurai;
	Samurai->attack(supmt);
	delete pr;
	delete pf;
	delete Samurai;
	return 0;
}