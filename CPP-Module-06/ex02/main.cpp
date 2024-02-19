#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <stdlib.h>
#include <time.h>

enum TYPES
{
	A_type,
	B_type,
	C_type
};

Base * generate(void)
{
	std::srand(std::time(NULL));
	int num_random = std::rand() % 3;
	switch (num_random)
	{
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		case 2:
			return new C;
			break;
		default:
		break;
	}
	return NULL;
}

void identify(Base *p)
{
	A * a_temp = dynamic_cast<A *>(p);
	B * b_temp = dynamic_cast<B *>(p);
	C * c_temp = dynamic_cast<C *>(p);

	if(a_temp)
		std::cout << "Class A by pointers" << std::endl;
	else if(b_temp)
		std::cout << "Class B by pointers" << std::endl;
	else if(c_temp)
		std::cout << "Class C by pointers" << std::endl;
	else
		std::cout << "Invalid class by pointers" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Class A by reference" << std::endl;
	}
	catch(std::exception & e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Class B by reference" << std::endl;
		}
		catch(std::exception & e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Class C by reference" << std::endl;
			}
			catch(std::exception & e)
			{
				std::cout << "Invalid class by reference" << std::endl;
			}
		}
	}
}

int main(void)
{
	Base * testePointer = generate();
	Base & testeReference = *testePointer;
	identify(testePointer);
	identify(testeReference);
	delete testePointer;
	return 0;
}
