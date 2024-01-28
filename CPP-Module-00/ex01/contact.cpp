#include "contact.hpp"

void Contact::setInfo(void)
{
	printMenu();
	std::cout << "First Name: ";
	std::getline(std::cin, this->first_name);
	std::cin.clear();
	std::cout << "Last Name: ";
	std::getline(std::cin, this->last_name);
	std::cin.clear();
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cin.clear();
	while(1)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, this->phone_number);
		std::cin.clear();
		if(this->phone_number.find_first_not_of("0123456789") == std::string::npos && phone_number != "")
			break;
		else
			std::cout << "Invalid number" << std::endl;
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
	std::cin.clear();
}
void Contact::printInfo(void)
{
	printMenu();
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string Contact::returnFirstName(void)
{
	return(this->first_name);
}

std::string Contact::returnLastName(void)
{
	return(this->last_name);
}

std::string Contact::returnNickname(void)
{
	return(this->nickname);
}

std::string Contact::returnPhone(void)
{
	return(this->phone_number);
}

std::string Contact::returnSecret(void)
{
	return(this->darkest_secret);
}
