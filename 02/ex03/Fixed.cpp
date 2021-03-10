#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
	number = 0;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called\n";
	number = n << bits;
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called\n";
	number = n * (1 << bits);
}

Fixed::Fixed(const Fixed &b)
{
	//std::cout << "Copy constructor called\n";
	this->number = b.getRawBits();
}
Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called\n";
	return(this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::toInt(void) const{
	return (number >> bits);
}

float Fixed::toFloat(void) const{
	return ((float)number / (float)(1 << bits));
}

Fixed & Fixed::operator = (const Fixed &a)
{
	//std::cout << "Assignation operator called\n";
	this->number = a.getRawBits();
	return *this;
}

Fixed & Fixed::operator = (const float a)
{
	//std::cout << "Assignation float called\n";
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

	result.setRawBits(a.getRawBits() + b.getRawBits());
	return (result);
}

Fixed operator - (const Fixed &a, const Fixed &b)
{
	Fixed result;

	result.setRawBits(a.getRawBits() - b.getRawBits());
	return (result);
}

Fixed operator * (const Fixed &a, const Fixed &b)
{
	Fixed result;

	result.setRawBits((a.getRawBits() * b.getRawBits()) >> 8);
	return (result);
}

Fixed operator / (const Fixed &a, const Fixed &b)
{
	Fixed result;

	result.setRawBits((a.getRawBits() << 8) / b.getRawBits());
	return (result);
}

Fixed &Fixed::operator ++ ()
{
	number++;
	return (*this);
}

Fixed &Fixed::operator -- ()
{
	number--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed a = *this;
	number++;
	return(a);
}

Fixed Fixed::operator -- (int)
{
	Fixed a = *this;
	number--;
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