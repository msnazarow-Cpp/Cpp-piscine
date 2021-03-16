#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
	_number = 0;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called\n";
	_number = n << _bits;
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called\n";
	_number = n * (1 << _bits);
}

Fixed::Fixed(const Fixed &b)
{
	//std::cout << "Copy constructor called\n";
	this->_number = b.getRawBits();
}

Fixed::Fixed(std::string s)
{
	*this = 0;
	int negative = 1;
	Fixed out2 = 0;
	int l = 0;
	int i = 0;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			negative = -1;
		i++;
	}
	while (isdigit(s[i]))
		*this = *this * 10 + s[i++] - 48;
	if (s[i++] == '.')
		while (isdigit(s[i]) && ++l)
			out2 = out2 * 10 + s[i++] - 48;
	*this = *this + out2/ powf(10,l);
	*this = *this * negative;
}
Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int Fixed::getOffset(void)
{
	return Fixed::_bits;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called\n";
	return(this->_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int Fixed::toInt(void) const{
	return (_number >> _bits);
}

float Fixed::toFloat(void) const{
	return ((float)_number / (float)(1 << _bits));
}

Fixed & Fixed::operator = (const Fixed &a)
{
	//std::cout << "Assignation operator called\n";
	this->_number = a.getRawBits();
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

	result.setRawBits((a.getRawBits() >> Fixed::getOffset()) * b.getRawBits());
	return (result);
}

Fixed operator / (const Fixed &a, const Fixed &b)
{
	Fixed result;

	result.setRawBits((a.getRawBits() << Fixed::getOffset()) / b.getRawBits());
	return (result);
}

Fixed &Fixed::operator ++ ()
{
	_number++;
	return (*this);
}

Fixed &Fixed::operator -- ()
{
	_number--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed a = *this;
	_number++;
	return(a);
}

Fixed Fixed::operator -- (int)
{
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