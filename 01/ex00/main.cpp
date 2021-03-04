#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony Shreck = Pony(16, 300, 140, "brown", "male");
	Shreck.run();
}

void ponyOnTheStack()
{
	Pony *Fiona = new Pony(14, 250, 130, "white", "female");
	Fiona->run();
	delete Fiona;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
