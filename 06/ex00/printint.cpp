#include <iostream>
#include <cstdlib>
#include <climits>
#include <iomanip>

void printint (float a)
{
	std::cout << std::setw(8) << "int: ";
	if (a > static_cast<float>(INT_MAX) || a < static_cast<float>(INT_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(a) << std::endl;
}


void printint (double a)
{
	std::cout << std::setw(8) << "int: ";
	if (a > static_cast<double>(INT_MAX) || a < static_cast<double>(INT_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(a) << std::endl;
}