#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <cstdlib>

enum TYPES
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	IMPOSSIBLE
};

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

//Functions
TYPES getType(const std::string & type);
bool isChar(const std::string & type);
bool isInt(const std::string & type);
bool isFloat(const std::string & type);
bool isDouble(const std::string & type);
void convertChar(char c);
void convertInt(int nbr);
void convertFloat(float nbr);
void convertDouble(double nbr);

#endif
