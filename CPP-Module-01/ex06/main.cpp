#include <iostream>
#include <vector>
#include <string>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
 	<< std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for"
			<< "years whereas you started working here since last month."
			<< std::endl << std::endl;

}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

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

typedef void(Harl::*p_member_function_harl)(void);

void Harl::complain(std::string level)
{
	std::vector<p_member_function_harl> optionsFunction = {&Harl::debug, &Harl::info, &Harl::warning , &Harl::error};

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
			std::cout << "[ Probably complaining about insignificant aaaproblems ]" << std::endl;
	}
}

int main(int ac, char **av)
{
	Harl object;
	if(ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		std::string level = av[1];
		object.complain(level);
	}

}
