#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

#define DEFAULT_CONSTRUCTOR_DATA "Default Constructor Data Called"
#define CONSTRUCTOR_DATA "Constructor Data Called"
#define COPY_CONSTRUCTOR_DATA "Copy Constructor Data Called"
#define DESTRUCTOR_DATA "Destructor Data Called"
#define OPERATOR_EQUAL_DATA "Operator equal Data Called"

class Data
{
	public:
		std::string data_str;
};

#endif
