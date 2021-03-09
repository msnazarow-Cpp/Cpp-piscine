#include "Brain.hpp"

class Human
{
private:
	Brain brain;
public:
	Brain &getBrain();
	Brain *identify();
	Human(/* args */);
	~Human();
};
