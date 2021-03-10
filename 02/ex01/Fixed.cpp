#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	number = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	number = n << bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	number = n * (1 << bits);
}

Fixed::Fixed(const Fixed &b)
{
	std::cout << "Copy constructor called\n";
	this->number = b.getRawBits();
}
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return(this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}
Fixed & Fixed::operator = (const Fixed &a)
{
	std::cout << "Assignation operator called\n";
	this->number = a.getRawBits();
	return *this;
}

int Fixed::toInt(void) const{
	return (number >> bits);
}

float Fixed::toFloat(void) const{
	return ((float)number / (float)(1 << bits));
}

std::ostream &operator << (std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}