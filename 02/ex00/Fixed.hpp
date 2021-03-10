#pragma once

class Fixed
{
private:
	int number;
	static const int bits = 8;
public:
	Fixed(int n = 0);
	Fixed(Fixed &);
	Fixed & operator = (const Fixed &a);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};