#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <cstdlib>

int main(void)
{
	ClapTrap Todd("Todd");
	FragTrap Bob("Bob");
	ScavTrap Billy("Billy");
	NinjaTrap Scott("Scott");
	std::srand(time(0));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Bob.takeDamage(Billy.meleeAttack(Bob.getName()));
	Billy.challengeNewcomer();
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Billy.beRepaired(10);
	Bob.beRepaired(10);
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Bob.takeDamage(Billy.meleeAttack(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Scott.ninjaShoebox(Bob);
	Scott.ninjaShoebox(Billy);
	Scott.ninjaShoebox(Todd);
	Scott.ninjaShoebox(Scott);

	Billy.challengeNewcomer();
	return 0;
}
