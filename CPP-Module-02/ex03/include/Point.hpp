#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#include "Fixed.hpp"

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

std::ostream &operator<<(std::ostream &stream, const Point &point);

//bsp functions
float area(const Point &a,const Point &b, const Point &c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif