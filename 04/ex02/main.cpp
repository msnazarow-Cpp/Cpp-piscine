#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <iostream>
int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob->clone());
	vlc->push(jim->clone());
	vlc->push(0);
	Squad usec(*(Squad *)vlc);
	TacticalMarine *will = new TacticalMarine(*(TacticalMarine *)bob);
	usec.push(will);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "Continue ? ";
		std::cin.get();
	}
	delete vlc;
return 0;
}