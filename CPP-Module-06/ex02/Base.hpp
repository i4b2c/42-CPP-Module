#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <stdint.h>

#define DEFAULT_CONSTRUCTOR_BASE "Default Constructor Base Called"
#define CONSTRUCTOR_BASE "Constructor Base Called"
#define COPY_CONSTRUCTOR_BASE "Copy Constructor Base Called"
#define DESTRUCTOR_BASE "Destructor Base Called"
#define OPERATOR_EQUAL_BASE "Operator equal Base Called"

class Base
{
	public:
		virtual ~Base(void);
};

#endif
