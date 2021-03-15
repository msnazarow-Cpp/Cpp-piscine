#pragma once
#include <iostream>

class Fixed
{
private:
	int _number;
	static const int _bits = 8;
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
	static int	getOffset(void);
	void setRawBits( int const raw );
};
std::ostream &operator << (std::ostream &stream, const Fixed &fixed);