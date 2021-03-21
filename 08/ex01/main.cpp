#include "Span.hpp"
#include <cstdlib>
#include <iostream>

int main(void)
{
	{
		Span a(8);
		srand(time(NULL));
		try
		{
			for (int i = 0; i < 10000; i++)
			{
				a.addnumber(rand() % 20);
				std::cout << a[i] << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "longestSpan: " << a.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << a.shortestSpan() << std::endl;
	}
	std::cout << "Continue ? ";
	std::cin.get();
	{
		Span a(10000);
		srand(time(NULL));
		try
		{
			for (int i = 0; i < 10000; i++)
			{
				a.addnumber(rand() - 5000000);
				std::cout << a[i] << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "longestSpan: " << a.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << a.shortestSpan() << std::endl;
	}
	std::cout << "Continue ? ";
	std::cin.get();
	Span a(1000);
	try
	{
		std::cout << "longestSpan: " << a.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << a.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
