#include <iostream>
#include <bits/stdc++.h>

class Fixed {
	private:
		int value;
		static const int numBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixedToCopy);
		Fixed &operator=(Fixed &fixedToCopy);
		~Fixed(void);
		int getRawBits(void) const ;
		void setRawBits(int const raw);
};

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

Fixed &Fixed::operator=(Fixed &fixedToCopy)
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


int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	b.setRawBits(200);
	c = b;
	c.setRawBits(100);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}
