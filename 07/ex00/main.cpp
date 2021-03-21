#include "whatever.hpp"
#include <iostream>

int main(void)
{
	{int a = 3;
	int b = 6;
	swap(a, b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;}
	{std::string a = "Bob";
	std::string b = "Bil";
	swap(a, b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;}
	return 0;
}
