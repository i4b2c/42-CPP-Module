#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	/*
	GeoGebra para analisar os triangulos melhor
	*/
	{
		Point a;
		Point const b(4,0);
		Point const c(2,3);
		Point const point_to_test(1,1);

		if (bsp(a,b,c,point_to_test) == true)
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
	}
	{
		Point const a(-1,0);
		Point const b(1.4082644628099, 1.9559504132231);
		Point const c(1.7719008264463, -0.8043801652893);
		Point const point_to_test(0.5003979185797, 1.2507162534435);
		if (bsp(a,b,c,point_to_test) == true)
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;

	}
	return 0;
}
