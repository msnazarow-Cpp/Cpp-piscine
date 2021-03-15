#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_number = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	_number = n << _bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	_number = n * (1 << _bits);
}

Fixed::Fixed(const Fixed &b)
{
	std::cout << "Copy constructor called\n";
	this->_number = b.getRawBits();
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

int Fixed::toInt(void) const{
	return (_number >> _bits);
}

int	Fixed::getOffset(void) {
	return(Fixed::_bits);
}

float Fixed::toFloat(void) const{
	return ((float)_number / (float)(1 << _bits));
}

std::ostream &operator << (std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}