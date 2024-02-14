#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

#define DEFAULT_CONSTRUCTOR_SCALARCONVERTE "Default Constructor ScalarConverte Called"
#define CONSTRUCTOR_SCALARCONVERTE "Constructor ScalarConverte Called"
#define COPY_CONSTRUCTOR_SCALARCONVERTE "Copy Constructor ScalarConverte Called"
#define DESTRUCTOR_SCALARCONVERTE "Destructor ScalarConverte Called"
#define OPERATOR_EQUAL_SCALARCONVERTE "Operator equal ScalarConverte Called"

class ScalarConverte
{
	public:
		static void convert(const std::string &);
};

#endif
