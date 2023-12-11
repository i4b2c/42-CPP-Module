#include "include/phonebook.hpp"

void pressEnterToContinue(void)
{
	std::cout << std::endl << "Press Enter to continue" << std::endl;
	std::cin.ignore();
}

void print_menu(void)
{
	system("clear");
	    		std::cout << "+" << std::string(43, '-') << "+" << std::endl;
	cout << "|" << std::setw(26) << "PhoneBook" << std::setw(18) << "|" <<  endl;
	    		std::cout << "+" << std::string(43, '-') << "+" << std::endl;
}

int main(void)
{
	PhoneBook book;
	string option;

	while(1)
	{
		print_menu();
		cout << "Choose a option:" << endl << "ADD" << endl << "SEARCH" << endl << "EXIT" << endl << "pb: ";
		getline(cin, option);
		cin.clear();
		if(option == "ADD")
			book.addContact();
		else if(option == "SEARCH")
			book.searchContact();
		else if(option == "EXIT")
			return EXIT_SUCCESS;
		else
		{
			cout << std::endl << "Invalid option" << endl;
			pressEnterToContinue();
		}
	}
}
