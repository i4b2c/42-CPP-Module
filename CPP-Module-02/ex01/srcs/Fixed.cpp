#include "../include/Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &fixedToCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixedToCopy.getRawBits());
	return *this;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0b0;
}

Fixed::Fixed(const Fixed &fixedToCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(fixedToCopy.getRawBits());
	*this = fixedToCopy;
}


int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw * (1 << Fixed::numBits));
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(raw * (1 << Fixed::numBits)));
}

int Fixed::toInt(void) const
{
	return this->value >> Fixed::numBits;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << Fixed::numBits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return stream;
}