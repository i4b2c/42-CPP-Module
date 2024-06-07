#include "Point.hpp"

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
	const_cast<Fixed&>(this->x) = copyPoint.x;
	const_cast<Fixed&>(this->y) = copyPoint.y;

	return *this;
}

Point::Point()
: x(0), y(0)
{
	#if DEBUG_MSG == 1
	std::cout << "Default Constructor Called" << std::endl;
	#endif
};

Point::Point(Point const &arg): x(arg.returnX()) , y(arg.returnY())
{
	#if DEBUG_MSG == 1
	std::cout << "Constructor Called" << std::endl;
	#endif
}

Point::Point(const float xNum, const float yNum): x(xNum), y(yNum)
{
	#if DEBUG_MSG == 1
	std::cout << "Constructor Called" << std::endl;
	#endif
};

Point::~Point()
{
	#if DEBUG_MSG == 1
	std::cout << "Point Destructor Called" << std::endl;
	#endif
};

std::ostream &operator<<(std::ostream &stream, const Point &point)
{
	stream << point.returnX();
	stream << point.returnY();
	return stream;
}
