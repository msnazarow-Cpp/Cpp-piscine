#include "Array.hpp"
#include <iostream>

int main(void)
{
	{
		Array <int> a(10);
		a[5] = 42;
		std::cout << a[5] << std::endl;
		Array <int> b(a);
		b[5] = 45;
		std::cout << a[5] << std::endl;
		std::cout << b[5] << std::endl;
	}
	{
		Array <std::string> a(10);
		a[5] = "alla";
		std::cout << a[5] << std::endl;
		Array <std::string> b(a);
		b[5] = "Bob";
		std::cout << a[5] << std::endl;
		std::cout << b[5] << std::endl;
	}
	return 0;
}
