#include "../include/Point.hpp"

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
{
	std::cout << "Default Constructor Called" << std::endl;
};

Point::Point(Point const &arg): x(arg.returnX()) , y(arg.returnY())
{
	std::cout << "Constructor Called" << std::endl;
}

Point::Point(const float xNum, const float yNum): x(xNum), y(yNum)
{
	std::cout << "Constructor Called" << std::endl;
};

Point::~Point()
{
	std::cout << "Default Destructor Called" << std::endl;
};

std::ostream &operator<<(std::ostream &stream, const Point &point)
{
	stream << point.returnX();
	stream << point.returnY();
	return stream;
}