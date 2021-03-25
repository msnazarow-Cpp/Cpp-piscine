#include <algorithm>
#include <iostream>


template <typename T>
typename T::iterator easyfind(T& a, int b)
{
	typename T::iterator iter = std::find(a.begin(), a.end(), b);
	if (iter == a.end())
		throw std::exception();
	return (iter);
}