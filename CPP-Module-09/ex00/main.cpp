#include "BitcoinExchange.hpp"

std::string trim(std::string arg)
{
    arg.erase(0, arg.find_first_not_of(" \n\t"));
    arg.erase(arg.find_last_not_of(" \n\t") + 1);
	return arg;
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
			pos = line.find_first_of('|');
			temp_first = trim(line.substr(0,pos));
			temp_second = trim(line.substr(pos + 1));
			std::cout << temp_first << " => " << temp_second << " = " \
			<< std::strtof(temp_second.c_str(),NULL) * data.takeValue(temp_first) << std::endl;
		}
		file_input.close();
	}
	else
		std::cout << "Error: File non exist" << std::endl;
	// BitcoinExchange data;
}

int main(int ac,char **av)
{
	if(ac == 1 && !av[1])
	{
		std::cerr << "Error invalid input" << std::endl;
		return EXIT_FAILURE;
	}
	else
	{
		executeBitcoin(av[1]);
	}
	return EXIT_SUCCESS;
}