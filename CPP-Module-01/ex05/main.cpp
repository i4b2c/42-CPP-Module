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
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
 	<< std::endl;
}

void Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for"
			<< "years whereas you started working here since last month."
			<< std::endl;

}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
typedef void(Harl::*p_member_function_harl)(void);

void Harl::complain(std::string level)
{
	std::vector<std::string> optionsError = {"DEBUG","INFO","WARNING","ERROR"};
	std::vector<p_member_function_harl> optionsFunction = {&Harl::debug, &Harl::info, &Harl::warning , &Harl::error};
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


int main(void)
{
	std::string level;
	Harl harl;

	std::cout << "write the a harl level: "; std::cin >> level;
	harl.complain(level);
}
