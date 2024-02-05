#include "Fixed.hpp"

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "copy constructor called" << std::endl;
	this->setRawBits(fixed.getRawBits());
}

Fixed::Fixed()
{
	RawBits = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fi)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fi.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (RawBits);
}

void Fixed::setRawBits(int const bit)
{
	this->RawBits = bit;
}