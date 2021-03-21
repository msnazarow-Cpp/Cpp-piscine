#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed():_number(0)
{
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const Fixed &b)
{
	std::cout << "Copy constructor called\n";
	*this = b;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return(this->_number);
}

int	Fixed::getOffset(void) {
	return(Fixed::_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}
Fixed & Fixed::operator = (const Fixed &a)
{
	std::cout << "Assignation operator called\n";
	this->_number = a.getRawBits();
	return *this;
}