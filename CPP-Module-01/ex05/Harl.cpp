#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void Harl::error(void)
{
	std::cout << ERROR << std::endl;
}
void Harl::complain(std::string level)
{
	std::string optionsError[4] = {"DEBUG","INFO","WARNING","ERROR"};
	p_member_function_harl optionsFunction[4] = {&Harl::debug, &Harl::info, &Harl::warning , &Harl::error};
	for(size_t i = 4 ; i > 0 ; i -= 1)
	{
		if(level == optionsError[i - 1])
		{
			std::cout << optionsError[i - 1] << ": ";
			(this->*optionsFunction[i - 1])();
			return ;
		}
	}

}
