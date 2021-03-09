#include "Human.hpp"

Human::Human(/* args */)
{
}

Human::~Human()
{
}

Brain *Human::identify()
{
	return (this->brain.identify());
}
Brain &Human::getBrain()
{
	return (this->brain);
}