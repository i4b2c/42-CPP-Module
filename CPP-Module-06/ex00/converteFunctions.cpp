#include "ScalarConverte.hpp"

TYPES getType(const std::string & type)
{
	if(isChar(type))
		return CHAR;
	else if(isInt(type))
		return INT;
	else if(isFloat(type))
		return FLOAT;
	else if(isDouble(type))
		return DOUBLE;
	return IMPOSSIBLE;
}

bool isChar(const std::string & type)
{
	if(type.length() == 1
		&& type.at(0) >= std::numeric_limits<char>::min()
		&& type.at(0) <= std::numeric_limits<char>::max()
		&& !isdigit(type.at(0)))
		return true;
	return false;
}

bool isInt(const std::string & type)
{
	char * restInt = NULL;
	std::strtol(type.c_str(),&restInt,10);
	if(restInt && !restInt[0])
		return true;
	return false;
}

bool isFloat(const std::string & type)
{
	char * restFloat = NULL;
	std::strtof(type.c_str(),&restFloat);
	if(restFloat && restFloat[0] == 'f' && !restFloat[1])
		return true;
	return false;
}

bool isDouble(const std::string & type)
{
	char * restDouble = NULL;
	std::strtod(type.c_str(),&restDouble);
	if(restDouble && !restDouble[0])
		return true;
	return false;
}

void convertChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" <<  std::endl;
	std::cout <<  "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void convertInt(int nbr)
{
	if(nbr <= std::numeric_limits<char>::max()
	&& nbr >= std::numeric_limits<char>::min()
	&& isprint(nbr))
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << "float: " << static_cast<float>(nbr) << ".0f" <<  std::endl;
	std::cout <<  "double: " << static_cast<double>(nbr) << ".0" << std::endl;
}

void convertFloat(float nbr)
{
	if(nbr - static_cast<int>(nbr) == 0.0f)
	{
		if(nbr <= std::numeric_limits<char>::max()
		&& nbr >= std::numeric_limits<char>::min()
		&& isprint(static_cast<int>(nbr)))
			std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
		std::cout << "float: " << nbr << ".0f"<< std::endl;
		std::cout << "double: " << nbr << ".0" << std::endl;

	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << nbr << "f"<< std::endl;
		std::cout << "double: " << nbr << std::endl;
	}
}

void convertDouble(double nbr)
{
	if(nbr - static_cast<int>(nbr) == 0.0f)
	{
			if(nbr <= std::numeric_limits<char>::max()
			&& nbr >= std::numeric_limits<char>::min()
			&& isprint(static_cast<int>(nbr)))
			std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
		std::cout << "float: " << nbr << ".0f"<< std::endl;
		std::cout << "double: " << nbr << ".0" << std::endl;

	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << nbr << "f"<< std::endl;
		std::cout << "double: " << nbr << std::endl;
	}
}