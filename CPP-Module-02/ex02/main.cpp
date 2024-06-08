#include "Fixed.hpp"

void test_default(void)
{
	std::cout << "+---------------+" << std::endl;
	std::cout << "| Default Tests |" << std::endl;
	std::cout << "+---------------+" << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl << std::endl;
	}
}

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		std::cout << "\nTesting Increment/Decrement operators" << std::endl;
		Fixed a(15);

		std::cout << "a: " << a << std::endl;
		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "a--: " << a-- << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "--a: " << --a << std::endl;
		std::cout << "a: " << a << std::endl;
	}
	{
		std::cout << "\nTesting Comparison operators" << std::endl;
		Fixed a(15);
		Fixed b(16);
		Fixed c(15);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "a > b: " << std::boolalpha << (a > b) << std::endl;
		std::cout << "a > c: " << std::boolalpha << (a > c) << std::endl;
		std::cout << "a < b: " << std::boolalpha << (a < b) << std::endl;
		std::cout << "a < c: " << std::boolalpha << (a < c) << std::endl;
		std::cout << "a >= b: " << std::boolalpha << (a >= b) << std::endl;
		std::cout << "a >= c: " << std::boolalpha << (a >= c) << std::endl;
		std::cout << "a <= b: " << std::boolalpha << (a <= b) << std::endl;
		std::cout << "a <= c: " << std::boolalpha << (a <= c) << std::endl;
		std::cout << "a == b: " << std::boolalpha << (a == b) << std::endl;
		std::cout << "a == c: " << std::boolalpha << (a == c) << std::endl;
		std::cout << "a != b: " << std::boolalpha << (a != b) << std::endl;
		std::cout << "a != c: " << std::boolalpha << (a != c) << std::endl;
	}
	{
		std::cout << "\nTesting Arithmetic Operators" << std::endl;
		Fixed a(10);
		Fixed b(20);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "a / b: " << a / b << std::endl;
	}
	{
		std::cout << "\nTesting Min and Max funcions" << std::endl;
		Fixed a(10);
		Fixed b(20);
		const Fixed c(30);
		const Fixed d(0);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "min(a,b): " << Fixed::min(a,b) << std::endl;
		std::cout << "max(a,b): " << Fixed::max(a,b) << std::endl << std::endl;

		std::cout << "Testing with const Fixed" << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl;
		std::cout << "min(c,d): " << Fixed::min(c,d) << std::endl;
		std::cout << "max(c,d): " << Fixed::max(c,d) << std::endl;
	}
}

int main( void )
{
	test_default();
	test_main();
}
