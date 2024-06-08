#include "Fixed.hpp"

void test_default(void)
{
	std::cout << "-----------------" << std::endl;
	std::cout << "| Default Tests |" << std::endl;
	std::cout << "-----------------" << std::endl;
	{
		Fixed a;
		Fixed b( a );
		Fixed c;
		
		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl << std::endl;
	}
}

void test_canonical_form(void)
{
	std::cout << "------------------------" << std::endl;
	std::cout << "| Canonical Form Tests |" << std::endl;
	std::cout << "------------------------" << std::endl;
	{
		Fixed a;
		Fixed b;

		b.setRawBits(5);
		std::cout << std::endl << "Copy Assigment: " << std::endl;
		std::cout << "a: " << a.getRawBits() << std::endl;
		std::cout << "b: " << b.getRawBits() << std::endl;

		std::cout << "a = b;" << std::endl;
		std::cout << "b.setRawBits(12);" << std::endl;
		a = b;
		b.setRawBits(12);

		std::cout << "a: " << a.getRawBits() << std::endl;
		std::cout << "b: " << b.getRawBits() << std::endl << std::endl;
	}
	{
		Fixed a;

		std::cout << "Constructor per reference: " << std::endl;
	
		a.setRawBits(10);

		std::cout << "a: " << a.getRawBits() << std::endl;
		std::cout << "Fixed b(a);" << std::endl;

		Fixed b(a);

		std::cout << "a: " << a.getRawBits() << std::endl;
		std::cout << "b: " << b.getRawBits() << std::endl;

		std::cout << "a.setRawBits(5)" << std::endl;
		a.setRawBits(5);

		std::cout << "a: " << a.getRawBits() << std::endl;
		std::cout << "b: " << b.getRawBits() << std::endl;
	}
}

int main( void )
{
	test_default();
	test_canonical_form();
}
