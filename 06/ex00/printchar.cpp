#include <iostream>
#include <iomanip>

void	printchar(int a)
{
	std::cout << std::setw(8) << "char: ";
	if (a >= 32 && a <= 126)
		std::cout << static_cast<char>(a) << std::endl;
	else if (a < 32 && a >= 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	printchar(double a)
{
	std::cout << std::setw(8) << "char: ";
	if (a >= 32 && a <= 126)
		std::cout << static_cast<char>(a) << std::endl;
	else if (a < 32 && a >= 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	printchar(float a)
{
	std::cout << std::setw(8) << "char: ";
	if (a >= 32 && a <= 126)
		std::cout << static_cast<char>(a) << std::endl;
	else if (a < 32 && a >= 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}