#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(int n)
{
	std::cout << "Default constructor called\n";
	number = n;
}
Fixed::Fixed(Fixed &b)
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