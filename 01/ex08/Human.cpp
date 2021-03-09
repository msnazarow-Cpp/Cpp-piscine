#include "Human.hpp"
#include <iostream>
#include <string>

void Human::meleeAttack(std::string const & target)
{
	std::cout << "I bit " << target << " with melee attack" << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
	std::cout << "I bit " << target << " with ranged attack" << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
	std::cout << "I bit " << target << " with intimidating shout" << std::endl;
}


void Human::action(std::string const & action_name, std::string const & target)
{
	typedef void (Human:: *myfunc)(std::string const & target);
	myfunc funks[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	std::string str[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	int i = -1;
	while (!str[++i].empty())
		if (str[i] == action_name){
			(this->*funks[i])(target);
			return ;}
	std::cout << "no such method\n";
}