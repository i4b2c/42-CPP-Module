#include <iostream>
#include <cmath>
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

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(Point const &copyPoint);
		Point &operator=(const Point &copyPoint);
		~Point(void);
		Fixed returnX(void) const;
		Fixed returnY(void) const;
		float xToFloat(void) const;
		float yToFloat(void) const;
};

float Point::xToFloat(void) const
{
	return this->x.toFloat();
}

float Point::yToFloat(void) const
{
	return this->y.toFloat();
}

Fixed Point::returnX(void) const { return this->x; };

Fixed Point::returnY(void) const { return this->y; };

Point &Point::operator=(const Point &copyPoint)
{
	Point temp(copyPoint.x.toFloat(), copyPoint.y.toFloat());

	//uso const_cast para "remover" temporariamente o const do <Fixed>
	//e assim mudar o valor
	const_cast<Fixed&>(this->x) = temp.returnX();
	const_cast<Fixed&>(this->y) = temp.returnY();

	return *this;
}

Point::Point()
: x(0), y(0)
{};

Point::Point(Point const &arg): x(arg.returnX()) , y(arg.returnY())
{
}

Point::Point(const float xNum, const float yNum): x(xNum), y(yNum) {};

Point::~Point() {} ;

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
	if(this->toFloat() == nbr.toFloat())
		return true;
	return false;
}

Fixed &Fixed::operator=(const Fixed &fixedToCopy)
{
	this->setRawBits(fixedToCopy.getRawBits());
	return *this;
}


Fixed::Fixed(void)
{
	this->value = 0b0;
}

Fixed::Fixed(const Fixed &fixedToCopy)
{
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

Fixed::~Fixed(void) {};

Fixed::Fixed(const int raw)
{
	this->setRawBits(raw * (1 << Fixed::numBits));
}

Fixed::Fixed(const float raw)
{
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

std::ostream &operator<<(std::ostream &stream, const Point &point)
{
	stream << point.returnX();
	stream << point.returnY();
	return stream;
}

int area(const Point &a,const Point &b, const Point &c)
{
	int num = 0.5 * roundf(a.xToFloat() * (b.yToFloat() - c.yToFloat()) + b.xToFloat() * (c.yToFloat() - a.yToFloat()) + c.xToFloat() * (a.yToFloat() - b.yToFloat()));
	if(num < 0)
		num *= -1;
	return num;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int areaTotal = area(a,b,c);
	(void)areaTotal;
	int area1 = area(a,b,point);
	int area2 = area(a,c,point);
	int area3 = area(b,c,point);

	if(areaTotal == (area1 + area2 + area3))
		return true;
	return false;
}

int main( void )
{
	Point a;
	Point const b(4,0);
	Point const c(2,4);
	Point const d(4,4);

	if(bsp(a,b,c,d) == true)
		std::cout << "verdadeiro" << std::endl;
	else
		std::cout << "falso" << std::endl;
	return 0;
}
