#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <queue>
#include <stack>

int main(void)
{
	{
		int x[] = {10, 3, 5};
		std::vector <int> a(x, x + 3);
		for (int i = 0; i < 11; i++)
			try
			{
				easyfind(a, i);
				std::cout << i << " Is iN it" << std::endl;
			}
			catch(std::exception)
			{
				std::cout << "NO GOD DaMN NO" << std::endl;
			}
	}
	{
		int x[] = {10, 3, 5};
		std::list <int> a(x, x + 3);
		for (int i = 0; i < 11; i++)
			try
			{
				easyfind(a, i);
				std::cout << i << " Is iN it" << std::endl;
			}
			catch(std::exception)
			{
				std::cout << "NO GOD DaMN NO" << std::endl;
			}
	}
	return 0;
}
