#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &fixedToCopy)
{
	#if DEBUG_MSG == 1
	std::cout << "Copy assignment operator called" << std::endl;
	#endif
	this->setRawBits(fixedToCopy.value);
	return *this;
}

Fixed::Fixed(void)
{
	#if DEBUG_MSG == 1
	std::cout << "Default constructor called" << std::endl;
	#endif
	this->value = 0b0;
}

Fixed::Fixed(const Fixed &fixedToCopy)
{
	#if DEBUG_MSG == 1
	std::cout << "Copy constructor called" << std::endl;
	#endif
	this->setRawBits(fixedToCopy.value);
	*this = fixedToCopy;
}

Fixed::~Fixed(void)
{
	#if DEBUG_MSG == 1
	std::cout << "Destructor called" << std::endl;
	#endif
}

Fixed::Fixed(const int raw)
{
	#if DEBUG_MSG == 1
	std::cout << "Int constructor called" << std::endl;
	#endif
	this->setRawBits(raw * (1 << Fixed::numBits));
}

Fixed::Fixed(const float raw)
{
	#if DEBUG_MSG == 1
	std::cout << "Float constructor called" << std::endl;
	#endif
	this->setRawBits(roundf(raw * (1 << Fixed::numBits)));
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
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
