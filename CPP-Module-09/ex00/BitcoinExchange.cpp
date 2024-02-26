#include "BitcoinExchange.hpp"

std::string trim(std::string arg)
{
    arg.erase(0, arg.find_first_not_of(" \n\t"));
    arg.erase(arg.find_last_not_of(" \n\t") + 1);
	return arg;
}

bool checkInput(std::string arg)
{
	size_t pos = arg.find_first_of('|');
	if(pos == std::string::npos)
		return false;
	std::string temp_first,temp_second;
	temp_first = trim(arg.substr(0,pos));
	temp_second = trim(arg.substr(pos + 1));
	if(temp_first.size() == 0 || temp_second.size() == 0)
		return false;
	return true;
}

bool checkDate(std::string arg)
{
	float year_date = atof(arg.substr(0,4));
	float month_date = atof(arg.substr(5,2));
	float day_date;
	(arg.size() == 11) ? day_date = atof(arg.substr(8,2)): day_date = atof(arg.substr(8));
	if(year_date >= 2024 || year_date <= 1900)
		return false;
	else if(month_date >= 12 || month_date <= 0)
		return false;
	else if(day_date <= 0)
		return false;
	else if(day_date > 31 && (month_date == 1 || month_date == 3 || month_date == 5 || month_date == 7 || month_date == 8 || month_date == 10 || month_date == 12))
		return false;
	else if(day_date > 30 && (month_date == 4 || month_date == 6 || month_date == 9 || month_date == 11))
		return false;
	else if(day_date > 29 && month_date == 2 && !(int(year_date) % 4))
		return false;
	else if(day_date > 28 && month_date == 2 && (int(year_date) % 4))
		return false;
	return true;
}

bool checkValue(std::string arg)
{
	if(atof(arg) > 1000 || atof(arg) < 0)
		return false;
	return true;
}

void executeBitcoin(char * file_name)
{
	std::ifstream file_input;
	file_input.open(file_name);
	if(file_input.is_open())
	{
		BitcoinExchange data;
		std::string line;
		std::string temp_first;
		std::string temp_second;
		int pos;
		while(std::getline(file_input,line))
		{
			if(!checkInput(line))
				std::cout << "Error: bad input => " << line << std::endl;
			else
			{
				pos = line.find_first_of('|');
				temp_first = trim(line.substr(0,pos));
				temp_second = trim(line.substr(pos + 1));
				if(!checkDate(temp_first))
					std::cout << "Error: bad date => " << temp_first << std::endl;
				else if(!checkValue(temp_second))
					std::cout << "Error: bad number => " << temp_second << std::endl; 
				else
					std::cout << temp_first << " => " << temp_second << " = " \
					<< std::strtof(temp_second.c_str(),NULL) * data.takeValue(temp_first) << std::endl;
			}
		}
		file_input.close();
	}
	else
		std::cout << "Error: File non exist" << std::endl;
}

float atof(std::string arg)
{
	return std::strtof(arg.c_str(),NULL);
}

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
			this->_value.insert(std::pair<std::string,float>(temp_first,atof(temp_second)));
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
