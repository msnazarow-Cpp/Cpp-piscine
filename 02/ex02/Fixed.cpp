#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <climits>

Fixed::Fixed():_number(0){}

Fixed::Fixed(const int n)
{
	if (labs(static_cast<long>(n) << _bits ) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs value is 8388607");
	_number = n << _bits;
}

Fixed::Fixed(const float n)
{
	if (static_cast<long>(roundf(n * (1 << _bits))) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs value is 8388607");
	_number = roundf(n * (1 << _bits));
}

Fixed::Fixed(const Fixed &b)
{
	(*this) = b;
}
Fixed::~Fixed(){}

int Fixed::getRawBits() const
{
	return(this->_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int Fixed::getOffset(void)
{
	return Fixed::_bits;
}

int Fixed::toInt(void) const{
	return (_number >> _bits);
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(_number) / static_cast<float>(1 << _bits));
}

Fixed & Fixed::operator = (const Fixed &a)
{
	this->_number = a.getRawBits();
	return (*this);
}

Fixed & Fixed::operator = (const float a)
{
	return (operator=(Fixed(a)));
}

std::ostream &operator << (std::ostream &stream, const Fixed &a)
{
	stream << a.toFloat();
	return (stream);
}

bool Fixed::operator > (const Fixed &b) const
{
	return (this->getRawBits() > b.getRawBits());
}
bool Fixed::operator < (const Fixed &b) const
{
	return (this->getRawBits() < b.getRawBits());
}
bool Fixed::operator >= (const Fixed &b) const
{
	return (this->getRawBits() >= b.getRawBits());
}
bool Fixed::operator <= (const Fixed &b) const
{
	return (this->getRawBits() <= b.getRawBits());
}
bool Fixed::operator == (const Fixed &b) const
{
	return (this->getRawBits() == b.getRawBits());
}
bool Fixed::operator != (const Fixed &b) const
{
	return (this->getRawBits() != b.getRawBits());
}

Fixed operator + (const Fixed &a, const Fixed &b)
{
	Fixed result;
	if (labs(static_cast<long>(a.getRawBits()) + static_cast<long>(b.getRawBits())) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	result.setRawBits(static_cast<long>(a.getRawBits()) + static_cast<long>(b.getRawBits()));
	return (result);
}

Fixed operator - (const Fixed &a, const Fixed &b)
{
	Fixed result;
	if (labs(static_cast<long>(a.getRawBits()) - static_cast<long>(b.getRawBits())) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	result.setRawBits(static_cast<long>(a.getRawBits()) - static_cast<long>(b.getRawBits()));
	return (result);
}

Fixed operator * (const Fixed &a, const Fixed &b)
{
	Fixed result;
	if (labs(((static_cast<long>(a.getRawBits()) * static_cast<long>(b.getRawBits())) >> Fixed::getOffset())) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	result.setRawBits(((static_cast<long>(a.getRawBits()) * static_cast<long>(b.getRawBits())) >> Fixed::getOffset()));
	return (result);
}

Fixed operator / (const Fixed &a, const Fixed &b)
{
	Fixed result;
	if (labs((static_cast<long>(a.getRawBits()) << Fixed::getOffset()) / static_cast<long>(b.getRawBits())) > INT_MAX)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	result.setRawBits((static_cast<long>(a.getRawBits()) << Fixed::getOffset()) / static_cast<long>(b.getRawBits()));
	return (result);
}

Fixed &Fixed::operator ++ ()
{
	if (_number == INT_MAX)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	_number++;
	return (*this);
}

Fixed &Fixed::operator -- ()
{
	if (_number == INT_MIN)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	_number--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	if (_number == INT_MAX)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	Fixed a = *this;
	_number++;
	return(a);
}

Fixed Fixed::operator -- (int)
{
	if (_number == INT_MIN)
		throw std::overflow_error("OverflowException: Max abs result value is 8388607");
	Fixed a = *this;
	_number--;
	return(a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}