#include "RPN.hpp"
#include <stack>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

float atof(std::string arg)
{
	return std::strtof(arg.c_str(),NULL);
}

void calc(std::stack<float> & arg, char op)
{
	if(arg.size() < 2)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	float num2 = arg.top();
	arg.pop();
	float num1 = arg.top();
	if(op == '-')
		num1 -= num2;
	else if(op == '+')
		num1 += num2;
	else if(op == '*')
		num1 *= num2;
	else if(op == '/')
		num1 /= num2;
	arg.pop();
	arg.push(num1);
}

void RPN::RPNCalc(std::string & arg)
{
	std::stack<float> teste;
	std::stringstream ss(arg);
	std::string line;
	while(std::getline(ss,line,' '))
	{
		if(line.find(" ") == std::string::npos && line.size() != 0)
		{
			if(line.find_first_not_of("0123456789-+/*") != std::string::npos)
			{
				std::cout << "Error" << std::endl;
				return ;
			}
			else if(line.find_first_not_of("0123456789"))
			{
				teste.push(atof(line));
			}
			else
				calc(teste,line.at(0));
		}
	}
	std::cout << teste.top() << std::endl;
}