#ifndef C_HPP
#define C_HPP

#include <iostream>
#include "Base.hpp"

#define DEFAULT_CONSTRUCTOR_C "Default Constructor C Called"
#define CONSTRUCTOR_C "Constructor C Called"
#define COPY_CONSTRUCTOR_C "Copy Constructor C Called"
#define DESTRUCTOR_C "Destructor C Called"
#define OPERATOR_EQUAL_C "Operator equal C Called"

class C: public Base
{
	public:
		C(void);
};

C::C(void)
{
	std::cout << DEFAULT_CONSTRUCTOR_C << std::endl;
}

#endif
