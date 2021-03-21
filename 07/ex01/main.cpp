#include "iter.hpp"
#include <string>
#include <cmath>
#include <iostream>

int main(void)
{
	int mas[3] = {-8, 100, -13};

	iter(mas, 3, abs);
	for (int i = 0; i < 3 ; i++)
		std::cout << mas[i] << " ";
	std::cout << std::endl;

	return 0;
}
