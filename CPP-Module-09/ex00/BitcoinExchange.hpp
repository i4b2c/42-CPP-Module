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
#include <time.h>

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

std::string trim(std::string arg);
bool checkInput(std::string arg);
bool checkDate(std::string arg);
bool checkValue(std::string arg);
void executeBitcoin(char * file_name);
float atof(std::string arg);

#endif
