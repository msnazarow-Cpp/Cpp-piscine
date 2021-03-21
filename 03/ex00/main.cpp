#include "FragTrap.hpp"
#include <cstdlib>
#include <iostream>

int main(void)
{
	FragTrap Bob("Bob");
	FragTrap Billy("Billy");

	std::srand(time(0));
	Billy.takeDamage(Bob.rangedAttack(Billy.getName()));
	Bob.takeDamage(Billy.meleeAttack(Bob.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	std::cout << "Continue ? ";
	std::cin.get();
	Billy.beRepaired(10);
	Bob.beRepaired(10);
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	Bob.takeDamage(Billy.vaulthunter_dot_exe(Bob.getName()));
	Billy.takeDamage(Bob.vaulthunter_dot_exe(Billy.getName()));
	return 0;
}
