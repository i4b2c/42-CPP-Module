#include "ScalarConverte.hpp"

enum TYPES
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	IMPOSSIBLE
};

TYPES getType(const char * type)
{
	std::string new_string = type;
	if(!new_string.c_str()[0])
		return IMPOSSIBLE;
	char *restInt, *restFloat;
	std::strtol(new_string.c_str(),&restInt,10);
	if(!restInt[0])
		return INT;
	std::strtof(new_string.c_str(),&restFloat);
	if(!restFloat[0])
		return DOUBLE;
	else if(restFloat[0] == 'f' && !restFloat[1])
		return FLOAT;
	if(new_string.c_str()[0] && !new_string.c_str()[1])
		return CHAR;
	return IMPOSSIBLE;
}

bool checkZeroDouble(const std::string & type)
{
	int numInt = std::strtol(type.c_str(),NULL,10);
	float numDouble = std::strtod(type.c_str(),NULL);
	if(float(numInt) - float(numDouble) != 0.0)
		return false;
	return true;
}

void ScalarConverte::convert(const std::string & type)
{
	const TYPES get_type = getType(type.c_str());
	bool checkZero = checkZeroDouble(type);
	int num = std::strtol(type.c_str(),NULL,10);
	switch (get_type)
	{
	case(CHAR):
		std::cout << "char: " << type << std::endl;
		std::cout << "int: " << int(type[0]) << std::endl;
		std::cout << "float: " << float(type[0]) << ".0f" << std::endl;
		std::cout << "double: " << double(type[0]) << ".0" << std::endl;
		break;
	
	case(INT):
		std::cout << "char: ";
		if(num > 31 && num < 127)
			std::cout << char(std::strtol(type.c_str(),NULL,10)) << std::endl;
		else if(num >= 0 && num <= 31)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;		
		std::cout << "int: " << type << std::endl;
		std::cout << "float: " << type << ".0f" << std::endl;
		std::cout << "double: " << type << ".0" << std::endl;
		break;

	case(FLOAT):
		std::cout << "char: ";
		if(checkZero)
		{
			if(num > 31 && num < 127)
				std::cout << char(std::strtol(type.c_str(),NULL,10)) << std::endl;
			else if(num >= 0 && num <= 31)
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << "impossible" << std::endl;
		}
		else
			std::cout << "impossible" << std::endl;
		std::cout << "int: ";
		if(std::strtol(type.c_str(),NULL,10) == 0 && std::strtof(type.c_str(),NULL) == 0.0f)
			std::cout << std::strtol(type.c_str(),NULL,10) << std::endl;
		else
					std::cout << "impossible" << std::endl;
		std::cout << "float: ";
		if(checkZero)
			std::cout << std::strtof(type.c_str(),NULL) << ".0";
		else
			std::cout << type;
		 std::cout << "f" << std::endl;
		std::cout << "double: " << std::strtod(type.c_str(),NULL);
		if(checkZero)
			std::cout << ".0";
		std::cout << std::endl;
		break;
	case(DOUBLE):
		std::cout << "char: ";
		if(checkZero)
		{
			if(num > 31 && num < 127)
				std::cout << char(std::strtol(type.c_str(),NULL,10)) << std::endl;
			else if(num >= 0 && num <= 31)
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << "impossible" << std::endl;
		}		
		else
			std::cout << "impossible" << std::endl;
		std::cout << "int: ";
		if(std::strtol(type.c_str(),NULL,10) == 0 && std::strtof(type.c_str(),NULL) == 0.0f)
			std::cout << std::strtol(type.c_str(),NULL,10) << std::endl;
		else
					std::cout << "impossible" << std::endl;
		std::cout << "float: " << type << "f" << std::endl;
		std::cout << "double: " << type << std::endl;
		break;
	default:
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
		break;
	}
}