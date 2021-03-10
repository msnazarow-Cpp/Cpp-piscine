#pragma once
#include <iostream>

class Fixed
{
private:
	int number;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
	Fixed & operator = (const Fixed &a);
	~Fixed();
	int	toInt(void) const;
	float toFloat(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
std::ostream &operator << (std::ostream &stream, const Fixed &fixed);