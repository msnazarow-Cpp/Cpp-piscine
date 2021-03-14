#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

//TacticalMarine::TacticalMarine(TacticalMarine &marine)
//{
//	*this = marine;
//}

TacticalMarine *TacticalMarine::clone() const
 {
	TacticalMarine *marine = new TacticalMarine;
	return (marine);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

//TacticalMarine& TacticalMarine::operator = (TacticalMarine &marine)
//{
//	*this = marine;
//}
