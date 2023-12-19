#include "../include/phonebook.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

#define NUM_MAX_CONTACTS 8

void PhoneBook::addContact(void)
{
	if(this->number_contacts >= NUM_MAX_CONTACTS)
		this->number_contacts = NUM_MAX_CONTACTS - 1;
	this->contacts[number_contacts].setInfo();
	this->number_contacts += 1;
}

void PhoneBook::searchContact(void)
{
	string index;
	int num_contact;

	print_menu();
	while(1)
	{
    		std::cout << "+" << std::string(43, '-') << "+" << std::endl;
			std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    		std::cout << "+" << std::string(43, '-') << "+" << std::endl;

    // Exibe os contatos
    for (size_t i = 0; i < 8; ++i) {
        std::cout << "|" << std::setw(10) << (i + 1) << "|"
                  << std::setw(10) << std::setw(10) << (contacts[i].returnFirstName().length() > 10 ? contacts[i].returnFirstName().substr(0, 9) + "." : contacts[i].returnFirstName()) << "|"
                  << std::setw(10) << std::setw(10) << (contacts[i].returnLastName().length() > 10 ? contacts[i].returnLastName().substr(0, 9) + "." : contacts[i].returnLastName()) << "|"
                  << std::setw(10) << std::setw(10) << (contacts[i].returnNickname().length() > 10 ? contacts[i].returnNickname().substr(0, 9) + "." : contacts[i].returnNickname()) << "|" << std::endl;
    }
    		std::cout << "+" << std::string(43, '-') << "+" << std::endl;
		cout << "Write the index of the contact you looking for" << endl << "pb: ";
		getline(cin,index);
		cin.clear();
		cout << endl;
		if(index.find_first_not_of("0123456789") == string::npos && index != "")
			break;
		else
			cout << "Invalid number" << endl;
	}
	num_contact = atoi(index.c_str()); //preciso checkar se e um int valido
	if(this->number_contacts == 0)
		cout << "You must implement some contact first :)" << endl;
	else if(this->number_contacts < size_t(num_contact) || num_contact < 1)
		cout << "Choose a valid number (1 - " << this->number_contacts << ")\n";
	else
		this->contacts[num_contact - 1].printInfo();
	cout << endl << "Press Enter to Continue" << endl;
	cin.ignore();
}

PhoneBook::PhoneBook(void)
{
	this->number_contacts = 0;
	return ;
}
