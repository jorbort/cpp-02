#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int RawBits;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	void setRawBits(const int bit);
	int getRawBits(void) const;
	int	toInt(void) const;
	float toFloat(void) const;
	Fixed &operator<<(const Fixed &fi);
	Fixed &operator=(const Fixed &fi);
};


#endif