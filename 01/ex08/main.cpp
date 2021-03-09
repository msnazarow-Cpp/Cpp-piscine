#include "Human.hpp"

int main(void)
{
	Human human;

	human.action("meleeAttack", "clown");
	human.action("rangedAttack", "boxer");
	human.action("intimidatingShout", "your mama");
	human.action("Some thing that does'n exitst", "me");
	return 0;
}
