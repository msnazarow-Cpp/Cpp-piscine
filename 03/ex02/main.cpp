#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <cstdlib>

int main(void)
{
	FragTrap Bob("Bob");
	ScavTrap Billy("Billy");

	std::srand(time(0));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Bob.takeDamage(Billy.meleeAttack(Bob.getName()));
	Billy.challengeNewcomer();
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Billy.beRepaired(10);
	Bob.beRepaired(10);
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.meleeAttack(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Billy.challengeNewcomer();
	Billy.challengeNewcomer();
	Billy.challengeNewcomer();
	Billy.challengeNewcomer();
	Billy.challengeNewcomer();
	Billy.challengeNewcomer();
	return 0;
}
