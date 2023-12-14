#include <iostream>
#include <bits/stdc++.h>

class Fixed {
	private:
		int value;
		static const int numBits = 8;
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &fixedToCopy);
		Fixed &operator=(const Fixed &fixedToCopy);
		~Fixed(void);
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const ;
		void setRawBits(int const raw);

		//new functions
		bool operator>(const Fixed &nbr);
		bool operator<(const Fixed &nbr);
		bool operator<=(const Fixed &nbr);
		bool operator>=(const Fixed &nbr);
		bool operator!=(const Fixed &nbr);
		bool operator==(const Fixed &nbr);
		Fixed operator+(const Fixed &nbr);
		Fixed operator-(const Fixed &nbr);
		Fixed operator/(const Fixed &nbr);
		Fixed operator*(const Fixed &nbr);
		Fixed operator++(void);
		Fixed operator++(int);
		static Fixed &max(Fixed &nb1, Fixed &nb2);
		static const Fixed &max(Fixed const &nb1, Fixed const &nb2);
		static Fixed &min(Fixed &nb1, Fixed &nb2);
		static const Fixed &min(Fixed const &nb1, Fixed const &nb2);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if(nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;
}

const Fixed &Fixed::max(const Fixed &nb1,const Fixed &nb2)
{
	if(nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if(nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;
}

const Fixed &Fixed::min(const Fixed &nb1,const Fixed &nb2)
{
	if(nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;
}

Fixed Fixed::operator++(void)
{
	// this->value += (1 << Fixed::numBits);
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(Fixed::toFloat());
	this->value += 1;
	// this->value += (1 << Fixed::numBits);
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
	std::cout << "operacao > feita" << std::endl;
	if(this->toFloat() > nbr.toFloat())
		return true;
	return false;
}
bool Fixed::operator<(const Fixed &nbr)
{
	std::cout << "operacao < feita" << std::endl;
	if(this->toFloat() < nbr.toFloat())
		return true;
	return false;
}
bool Fixed::operator>=(const Fixed &nbr)
{
	std::cout << "operacao >= feita" << std::endl;
	if(this->toFloat() >= nbr.toFloat())
		return true;
	return false;
}
bool Fixed::operator<=(const Fixed &nbr)
{
	std::cout << "operacao <= feita" << std::endl;
	if(this->toFloat() <= nbr.toFloat())
		return true;
	return false;
}
bool Fixed::operator!=(const Fixed &nbr)
{
	std::cout << "operacao != feita" << std::endl;
	if(this->toFloat() != nbr.toFloat())
		return true;
	return false;
}
bool Fixed::operator==(const Fixed &nbr)
{
	std::cout << "operacao == feita" << std::endl;
	if(this->toFloat() == nbr.toFloat())
		return true;
	return false;
}

Fixed &Fixed::operator=(const Fixed &fixedToCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw * (1 << Fixed::numBits));
}

Fixed::Fixed(const float raw)
{
	// std::cout << "Float constructor called" << std::endl;
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

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
