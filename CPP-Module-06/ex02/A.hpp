#ifndef A_HPP
#define A_HPP

#include <iostream>
#include "Base.hpp"

#define DEFAULT_CONSTRUCTOR_A "Default Constructor A Called"
#define CONSTRUCTOR_A "Constructor A Called"
#define COPY_CONSTRUCTOR_A "Copy Constructor A Called"
#define DESTRUCTOR_A "Destructor A Called"
#define OPERATOR_EQUAL_A "Operator equal A Called"

class A: public Base
{
	public:
		A(void);
};

A::A(void)
{
	std::cout << DEFAULT_CONSTRUCTOR_A << std::endl;
}

#endif
