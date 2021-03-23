#include "iter.hpp"
#include <string>
#include <cmath>
#include <iostream>
#include <ostream>

class Awesome
{
	public:
	Awesome(): _n(42){return;}
	int get() const {return this->_n;}
	private:
	int _n;
};
std::ostream & operator << (std::ostream & stream, Awesome const & rhs) { return (stream << rhs.get());}
template <typename T>
void print( T const & x) { std::cout << x << std::endl;}

int main(void)
{
	int mas[3] = {-8, 100, -13};
	std::cout << std::endl;
	iter(mas, 3, print);
	Awesome tab2[5];
	iter(tab2, 5, print);

	return 0;
}
