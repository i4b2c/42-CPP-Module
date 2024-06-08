#include "Fixed.hpp"

void test_default(void)
{
	std::cout << "+---------------+" << std::endl;
	std::cout << "| Default Tests |" << std::endl;
	std::cout << "+---------------+" << std::endl;
	{
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );

		a = Fixed( 1234.4321f );

		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;

		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl << std::endl;
	}
}

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		std::cout << "Testing Int Constructor" << std::endl;
		Fixed a(5);
		Fixed b(-1);
		Fixed c(214);
		Fixed d(-214);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl << std::endl;

		std::cout << "To int function: " << std::endl;

		std::cout << "a.toInt(): " << a.toInt() << std::endl;
		std::cout << "b.toInt(): " << b.toInt() << std::endl;
		std::cout << "c.toInt(): " << c.toInt() << std::endl;
		std::cout << "d.toInt(): " << d.toInt() << std::endl << std::endl;

		std::cout << "To float function: " << std::endl;

		std::cout << "a.toFloat(): " << a.toFloat() << std::endl;
		std::cout << "b.toFloat(): " << b.toFloat() << std::endl;
		std::cout << "c.toFloat(): " << c.toFloat() << std::endl;
		std::cout << "d.toFloat(): " << d.toFloat() << std::endl << std::endl;		

	}
	{
		std::cout << "Testing Float Constructor" << std::endl;
		Fixed a(1.1f);
		Fixed b(-11.1f);
		Fixed c(42.92f);
		Fixed d(-90.1f);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl << std::endl;

		std::cout << "To int function: " << std::endl;

		std::cout << "a.toInt(): " << a.toInt() << std::endl;
		std::cout << "b.toInt(): " << b.toInt() << std::endl;
		std::cout << "c.toInt(): " << c.toInt() << std::endl;
		std::cout << "d.toInt(): " << d.toInt() << std::endl << std::endl;

		std::cout << "To float function: " << std::endl;

		std::cout << "a.toFloat(): " << a.toFloat() << std::endl;
		std::cout << "b.toFloat(): " << b.toFloat() << std::endl;
		std::cout << "c.toFloat(): " << c.toFloat() << std::endl;
		std::cout << "d.toFloat(): " << d.toFloat() << std::endl;
	}
}

int main( void )
{
	test_default();
	test_main();
}
