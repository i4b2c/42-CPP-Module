#include "../include/Harl.hpp"

int getIndexLevel(const std::string level)
{
	if(level == "DEBUG")
		return 0;
	else if(level == "INFO")
		return 1;
	else if(level == "WARNING")
		return 2;
	else if(level == "ERROR")
		return 3;
	return 4;
}

void Harl::complain(std::string level)
{
	p_member_function_harl optionsFunction[4] = {&Harl::debug, &Harl::info, &Harl::warning , &Harl::error};

	switch(getIndexLevel(level))
	{
		case 0:
			(this->*optionsFunction[0])();
			(this->*optionsFunction[1])();
			(this->*optionsFunction[2])();
			(this->*optionsFunction[3])();
			break;
		case 1:
			(this->*optionsFunction[1])();
			(this->*optionsFunction[2])();
			(this->*optionsFunction[3])();
			break;
		case 2:
			(this->*optionsFunction[2])();
			(this->*optionsFunction[3])();
			break;
		case 3:
			(this->*optionsFunction[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << DEBUG << std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl << INFO << std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl << WARNING << std::endl << std::endl;

}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl<< ERROR << std::endl;
}
