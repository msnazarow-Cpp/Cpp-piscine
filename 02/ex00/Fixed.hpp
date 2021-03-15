#pragma once

class Fixed
{
private:
	int _number;
	static const int _bits = 8;
public:
	Fixed(int n = 0);
	Fixed(const Fixed &);
	Fixed & operator = (const Fixed &a);
	~Fixed();
	int getRawBits( void ) const;
	static int	getOffset(void);
	void setRawBits( int const raw );
};