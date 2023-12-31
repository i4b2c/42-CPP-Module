#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0b0;
}

Fixed::Fixed(const Fixed &fixedToCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixedToCopy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixedToCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixedToCopy.value);
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}