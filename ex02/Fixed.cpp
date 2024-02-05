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
// hasta aqui todo igual al ex00

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->RawBits = (integer << Fixed::bits);
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called" << std::endl;
	this->RawBits = std::roundf(floating_point * (1 << Fixed::bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->RawBits / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->RawBits >> Fixed::bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &fi)
{
	stream << fi.toFloat();
	return (stream);
}

//hasta aca todo igual que en el ex01
