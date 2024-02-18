#include "ScalarConverte.hpp"

void ScalarConverte::convert(const std::string & type)
{
	switch (getType(type))
	{
		case(CHAR):
			convertChar(type.at(0));
			break;
		case(INT):
			convertInt(std::atoi(type.c_str()));
			break;
		case(FLOAT):
			convertFloat(std::atof(type.c_str()));
			break;
		case(DOUBLE):
			convertDouble(std::atof(type.c_str()));
			break;
		default:
			std::cout << "Invalid type" << std::endl;
			break;
	}
}