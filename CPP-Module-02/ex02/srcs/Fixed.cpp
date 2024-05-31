#include "../include/Fixed.hpp"

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if(nb1.value > nb2.value)
		return nb1;
	return nb2;
}

const Fixed &Fixed::max(const Fixed &nb1,const Fixed &nb2)
{
	if(nb1.value > nb2.value)
		return nb1;
	return nb2;
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if(nb1.value > nb2.value)
		return nb1;
	return nb2;
}

const Fixed &Fixed::min(const Fixed &nb1,const Fixed &nb2)
{
	if(nb1.value > nb2.value)
		return nb1;
	return nb2;
}

Fixed Fixed::operator++(void)
{
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value += 1;
	return temp;
}

Fixed Fixed::operator+(const Fixed &nbr)
{
	return Fixed(this->toFloat() + nbr.toFloat());
}

Fixed Fixed::operator-(const Fixed &nbr)
{
	return Fixed(this->toFloat() - nbr.toFloat());
}

Fixed Fixed::operator/(const Fixed &nbr)
{
	return Fixed(this->toFloat() / nbr.toFloat());
}

Fixed Fixed::operator*(const Fixed &nbr)
{
	return Fixed(this->toFloat() * nbr.toFloat());
}

bool Fixed::operator>(const Fixed &nbr)
{
	if(this->toFloat() > nbr.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &nbr)
{
	if(this->toFloat() < nbr.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &nbr)
{
	if(this->toFloat() >= nbr.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &nbr)
{
	if(this->toFloat() <= nbr.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &nbr)
{
	if(this->toFloat() != nbr.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &nbr)
{
	#if DEBUG_MSG == 1
	std::cout << "operacao == feita" << std::endl;
	#endif
	if(this->toFloat() == nbr.toFloat())
		return true;
	return false;
}

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