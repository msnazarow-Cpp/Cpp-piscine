#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <cstdlib>

int main(void)
{
	ClapTrap Todd("Todd");
	FragTrap Bob("Bob");
	ScavTrap Billy("Billy");
	NinjaTrap Scott("Scott");
	SuperTrap Lamark("Lamark");

	std::srand(time(0));
	Lamark.ninjaShoebox(Lamark);
	Lamark.NinjaTrap::ninjaShoebox(Bob);
	Lamark.NinjaTrap::ninjaShoebox(Billy);
	Lamark.NinjaTrap::ninjaShoebox(Todd);
	Lamark.NinjaTrap::ninjaShoebox(Scott);

	return 0;
}
