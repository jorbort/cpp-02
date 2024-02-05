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
	~Fixed();
	void setRawBits(const int bit);
	int getRawBits(void) const;
	Fixed &operator=(const Fixed &fi);
};


#endif