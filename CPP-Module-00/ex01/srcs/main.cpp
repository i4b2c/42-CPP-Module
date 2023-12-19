#include "../include/phonebook.hpp"

void pressEnterToContinue(void)
{
	std::cout << std::endl << "Press Enter to continue" << std::endl;
	std::cin.ignore();
}

void print_menu(void)
{
	system("clear");
	std::cout << "+" << std::string(43, '-') << "+" << std::endl;
	std::cout << "|" << std::setw(26) << "PhoneBook" << std::setw(18) << "|" <<  std::endl;
	std::cout << "+" << std::string(43, '-') << "+" << std::endl;
}

void print_option(void)
{
	std::cout << "Choose a option:" \
	<< std::endl << "ADD" \
	<< std::endl << "SEARCH" \
	<< std::endl << "EXIT" \
	<< std::endl << "pb: ";
}

int main(int ac, char **av)
{
	PhoneBook book;
	std::string option;

	(void)av;
	if(ac != 1)
	{
		std::cerr << "Error: just call the program without parameters: ./phonebook" << std::endl;
		return (EXIT_FAILURE);
	}
	while(1)
	{
		print_menu();
		print_option();
		std::getline(std::cin, option);
		std::cin.clear();
		if(option == "ADD")
			book.addContact();
		else if(option == "SEARCH")
			book.searchContact();
		else if(option == "EXIT")
			return (EXIT_SUCCESS);
		else
		{
			std::cout << std::endl << "Invalid option" << std::endl;
			pressEnterToContinue();
		}
	}
	return (EXIT_SUCCESS);
}
