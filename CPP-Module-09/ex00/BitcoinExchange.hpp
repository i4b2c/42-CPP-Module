#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <fstream>
#include <string>
#include <stdio.h>
#include <utility>

#define COPY_CONSTRUCTOR_BITCOINEXCHANGE "Copy Constructor BitcoinExchange Called"
#define DESTRUCTOR_BITCOINEXCHANGE "Destructor BitcoinExchange Called"
#define OPERATOR_EQUAL_BITCOINEXCHANGE "Operator equal BitcoinExchange Called"

class BitcoinExchange
{
	private:
		std::map<std::string,float> _value;
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		float takeValue(std::string arg);
		void getData(void);
		void print(void);
};

// void BitcoinExchange::print(void) const
// {
// 	std::map<std::string,float>::iterator it,itn;
// 	it = this->_value.begin();
// 	itn = this->_value.end();
// 	while(it != itn)
// 	{
// 		std::cout << it->first << std::endl;
// 		it++;
// 	}
// 	return ;
// }


void BitcoinExchange::getData(void)
{
	std::ifstream file;
	file.open("data.csv");
	if(!file.is_open())
	{
		std::cerr << "Error : cannot open the file" << std::endl;
	}
	else
	{
		std::string line;
		std::string temp_first,temp_second;
		int pos;
		while(std::getline(file,line))
		{
			pos = line.find_first_of(',');
			temp_first = line.substr(0, pos);
			temp_second = line.substr(pos + 1);
			this->_value.insert(std::pair<std::string,float>(temp_first,std::strtof(temp_second.c_str(),NULL)));
		}
		file.close();
	}
}

void BitcoinExchange::print(void)
{
	std::map<std::string,float>::iterator it = this->_value.begin();
	std::map<std::string,float>::iterator itn = this->_value.end();
	while(it != itn)
	{
		std::cout << it->first << " = " << it->second << std::endl;
		it++;
	}
}

float BitcoinExchange::takeValue(std::string arg)
{
	std::map<std::string,float>::iterator it = this->_value.begin();
	while(it != this->_value.end())
	{
		if(it->first > arg)
		{
			--it;
			break;
		}
		++it;
	}
	return it->second;
}

BitcoinExchange::BitcoinExchange(void)
: _value()
{
	this->getData();
}

BitcoinExchange::~BitcoinExchange(void)
{
	
}

#endif
