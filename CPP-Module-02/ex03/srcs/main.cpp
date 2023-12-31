#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int main( void )
{
	Point a;
	Point const b(4,0);
	Point const c(2,4);
	Point const d(4,4);

	if (bsp(a,b,c,d) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return 0;
}
