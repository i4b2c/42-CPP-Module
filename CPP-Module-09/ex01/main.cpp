#include "RPN.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
		std::cout << "Error" << std::endl;
	else
	{
		std::string temp = av[1];
		RPN::RPNCalc(temp);
	}
}