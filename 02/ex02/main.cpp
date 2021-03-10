#include <iostream>
#include <iomanip>
#include "Fixed.hpp"
int main( void ) {
	Fixed a = 4.125f;
	Fixed b = 5.125f;
	std::cout << std::setw(15) << "a =" << std::setw(15) << a << std::setw(15) << "b =" << std::setw(15) << b << std::endl;
	std::cout << std::setw(15) << "max =" << std::setw(15) << Fixed::max(a,b) << std::setw(15) << std::endl;
	std::cout << std::setw(15) << "min =" << std::setw(15) << Fixed::min(a,b) << std::endl;
	std::cout << std::setw(15) << "Preincrement"  << std::setw(15) << a << std::setw(15) << ++a << std::setw(15) << a << std::endl;
	std::cout << std::setw(15) << "Postincrement" << std::setw(15) << a << std::setw(15) << a++ << std::setw(15) << a << std::endl;
	std::cout << std::setw(15) << "Predecrement"  << std::setw(15) << a << std::setw(15) << --a << std::setw(15) << a << std::endl;
	std::cout << std::setw(15) << "Postdecrement" << std::setw(15) << a << std::setw(15) << a-- << std::setw(15) << a << std::endl;
	std::cout << std::setw(15) << "a + b" << std::setw(15) << a + b << std::endl;
	std::cout << std::setw(15) << "a - b" << std::setw(15) << a - b << std::endl;
	std::cout << std::setw(15) << "a * b" << std::setw(15) << a * b << std::endl;
	std::cout << std::setw(15) << "a / b" << std::setw(15) << a / b << std::endl;
	std::cout << std::setw(15) << "a == b" << std::setw(15) << (a == b) << std::endl;
	std::cout << std::setw(15) << "a != b" << std::setw(15) << (a != b) << std::endl;
	return 0;
}
