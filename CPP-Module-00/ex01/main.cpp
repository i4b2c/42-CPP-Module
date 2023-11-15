#include "include/phonebook.hpp"

int main(void)
{
	PhoneBook book;
	string option;

	while(1)
	{
		cout << "Choose a option:" << endl << "ADD" << endl << "SEARCH\n->";
		getline(cin, option);
		cin.clear();
		if(option == "ADD")
			book.addContact();
		else if(option == "SEARCH")
			book.searchContact();
		else if(option == "EXIT")
			return EXIT_SUCCESS;
		else
			cout << "Invalid option" << endl;
	}
}
