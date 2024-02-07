#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
	
	Fixed &operator=(const Fixed &fi);

	bool  operator>( Fixed const &fi) const;
	bool  operator<( Fixed const &fi) const;
	bool  operator>=( Fixed const &fi) const;
	bool  operator<=( Fixed const &fi) const;
	bool  operator==( Fixed const &fi) const;
	bool  operator!=( Fixed const &fi) const;

	Fixed operator+(Fixed const &fi);
	Fixed operator-(Fixed const &fi);
	Fixed operator*(Fixed const &fi);
	Fixed operator/(Fixed const &fi);

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

};

std::ostream &operator<<(std::ostream &stream ,const Fixed &fi);

#endif