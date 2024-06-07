#include "Point.hpp"

float area(const Point &a,const Point &b, const Point &c)
{
	float num = 0.5 * (a.xToFloat() * (b.yToFloat() - c.yToFloat())
    + b.xToFloat() * (c.yToFloat() - a.yToFloat())
    + c.xToFloat() * (a.yToFloat() - b.yToFloat()));
	if(num < 0)
		num *= -1;
	return num;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float areaTotal = area(a,b,c);
	float area1 = area(a,b,point);
	float area2 = area(a,c,point);
	float area3 = area(b,c,point);

	if(area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	if(areaTotal == (area1 + area2 + area3))
		return true;
	return false;
}
