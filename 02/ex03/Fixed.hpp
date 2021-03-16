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
	Fixed(std::string);
	~Fixed();

	static int getOffset(void);
	int	toInt(void) const;
	float toFloat(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );


	Fixed & operator = (const Fixed &a);
	Fixed & operator = (const float a);
	bool operator > (const Fixed &a) const;
	bool operator >= (const Fixed &a) const;
	bool operator < (const Fixed &a) const;
	bool operator <= (const Fixed &a) const;
	bool operator == (const Fixed &a) const;
	bool operator != (const Fixed &a) const;
	Fixed& operator ++ ();
	Fixed& operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);

	const static Fixed &max(const Fixed &a, const Fixed &b);
	const static Fixed &min(const Fixed &a, const Fixed &b);
};
std::ostream &operator << (std::ostream &stream, const Fixed &);
Fixed operator + (const Fixed &a, const Fixed &b);
Fixed operator - (const Fixed &a, const Fixed &b);
Fixed operator * (const Fixed &a, const Fixed &b);
Fixed operator / (const Fixed &a, const Fixed &b);
