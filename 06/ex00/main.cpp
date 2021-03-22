#include <iostream>
#include <ios>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <string.h>
#include <iomanip>

template <typename T>
void	printchar(T a)
{
	std::cout << std::setw(8) << "char: ";
	if (a >= 32 && a <= 126)
		std::cout << static_cast<char>(a) << std::endl;
	else if (a < 32 && a >= 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

template <typename T>
void printint (T a)
{
	std::cout << std::setw(8) << "int: ";
	if (a > static_cast<T>(INT_MAX) || a < static_cast<T>(INT_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(a) << std::endl;
}

int	error()
{
	std::cout << std::setw(8) << "char: " << "impossible" << std::endl;
	std::cout << std::setw(8) << "int: " << "impossible" << std::endl;
	std::cout << std::setw(8) << "float: " << "impossible" << std::endl;
	std::cout << std::setw(8) << "double: " << "impossible" << std::endl;
	return (1);
}

int itisdouble(double a)
{
	printchar(a);
	printint(a);
	std::cout << std::setw(8) << "float: " << static_cast<float>(a) << 'f' << std::endl;
	std::cout << std::setw(8) << "double: " << a << std::endl;

	return (0);
}

int itisfloat(float a)
{
	printchar(a);
	printint(a);
	std::cout << std::setw(8) << "float: " << a << 'f' << std::endl;
	std::cout << std::setw(8) << "double: " << static_cast<double>(a) << std::endl;
	return (0);
}

int itisint(long a)
{

	if (a > static_cast<long>(INT_MAX) || a < static_cast<long>(INT_MIN))
		return (error());
	else
	{
		printchar(static_cast<int>(a));
		std::cout << std::setw(8) << "int: ";
		std::cout << static_cast<int>(a) << std::endl;
	}
	std::cout << std::setw(8) << "float: " << static_cast<float>(a) << 'f' << std::endl;
	std::cout << std::setw(8) << "double: " << static_cast<double>(a) << std::endl;
	return (0);
}


int main(int argc, char const *argv[])
{
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);
	int i = 0;
	if (argc != 2 || strlen(argv[1]) == 0)
		return (error());
	if (strlen(argv[1]) == 1 && argv[1][0] >= 32 && (argv[1][0] < '0' || argv[1][i] > '9')  && argv[1][0] <= 126)
	{
		std::cout << std::setw(8) << "char: '" << argv[1][0] << "'" << std::endl;
		std::cout << std::setw(8) << "int: " << static_cast<int>(argv[1][0]) << std::endl;
		std::cout << std::setw(8) << "float: " << static_cast<float>(argv[1][0]) << 'f' << std::endl;
		std::cout << std::setw(8) << "double: " << static_cast<double>(argv[1][0]) << std::endl;
		return (0);
	}
	char *check;
	{
		long a = strtol(argv[1], &check, 10);
		if (check == argv[1] + strlen(argv[1]))
			return (itisint(a));
	}
	{
		long double a = strtold(argv[1], &check);
		if (check == argv[1] + strlen(argv[1]))
			return (itisdouble(a));
		else if (check == argv[1] + strlen(argv[1]) - 1 && *check == 'f')
			return (itisfloat(a));
	}
	return (error());
}
