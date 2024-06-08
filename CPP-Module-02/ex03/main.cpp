#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	/*
	GeoGebra para analisar os triangulos melhor
	https://www.geogebra.org/calculator
	*/
	{
		Point a;
		Point const b(4,0);
		Point const c(2,2);
		Point const point_to_test(1,1);

		std::cout << (bsp(a,b,c,point_to_test) ? "Inside" : "Outside") << std::endl;
	}
	{
		Point a;
		Point const b(4,0);
		Point const c(2,2);
		Point const point_to_test(1,1.1f);

		std::cout << (bsp(a,b,c,point_to_test) ? "Inside" : "Outside") << std::endl;
	}
	{
		Point a;
		Point const b(4,0);
		Point const c(2,2);
		Point const point_to_test(1.1f,1);

		std::cout << (bsp(a,b,c,point_to_test) ? "Inside" : "Outside") << std::endl;
	}
	return 0;
}
