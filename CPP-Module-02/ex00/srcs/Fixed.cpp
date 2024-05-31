#include "../include/Fixed.hpp"

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
	this->value = fixedToCopy.value;
}

Fixed &Fixed::operator=(const Fixed &fixedToCopy)
{
	#if DEBUG_MSG == 1
	std::cout << "Copy assignment operator called" << std::endl;
	#endif
	this->setRawBits(fixedToCopy.value);
	return *this;
}

int Fixed::getRawBits(void) const
{
	#if DEBUG_MSG == 1
	std::cout << "getRawBits member function called" << std::endl;
	#endif
	return this->value;
}

Fixed::~Fixed(void)
{
	#if DEBUG_MSG == 1
	std::cout << "Destructor called" << std::endl;
	#endif
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}