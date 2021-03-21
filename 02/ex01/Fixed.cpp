#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <climits>
#include <stdlib.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_number = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	if (labs(static_cast<long>(n) << _bits ) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs value is 8388607");
	_number = n << _bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	if (static_cast<long>(roundf(n * (1 << _bits))) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs value is 8388607");
	_number = roundf(n * (1 << _bits));
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
	return (static_cast<float>(_number) / static_cast<float>(1 << _bits));
}

std::ostream &operator << (std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}