#include "Squad.hpp"

ISpaceMarine *Squad::getUnit(int n) const {
	return ((ISpaceMarine*)trooper->getUnit(n));
}

int Squad::getCount() const
{
	return(trooper->getCount());
}

int Squad::push(ISpaceMarine *content)
{
	if (!this->trooper)
	{
		this->trooper = new List(content);
		return (1);
	}
	return (trooper->push(content));
}

//int main(void)
//{
//	ISquad* vlc = new Squad;
//	vlc->push(bob);
//	vlc->push(jim);
//	return 0;
//}

Squad::Squad():trooper(0)
{

}

Squad& Squad::operator=(Squad &a)
{
	if (!trooper)
		trooper = new List();
	*trooper = *a.trooper;
	return (*this);
}

Squad::~Squad()
{
	delete trooper;
}

Squad::Squad(Squad &a)
{
	*this = a;
}
