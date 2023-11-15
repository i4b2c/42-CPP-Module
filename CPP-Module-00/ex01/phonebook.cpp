#include "phonebook.hpp"

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

	cout << "Write the index of the contact you looking for" << endl;
	getline(cin,index);
	cin.clear();
	num_contact = atoi(index.c_str()); //preciso checkar se e um int valido
	if(this->number_contacts == 0)
		cout << "You must implement some contact first :)" << endl;
	else if(this->number_contacts < size_t(num_contact) || num_contact < 1)
		cout << "Choose a valid number (1 - " << this->number_contacts << ")\n";
	else
		this->contacts[num_contact - 1].printInfo();
}

PhoneBook::PhoneBook(void)
{
	this->number_contacts = 0;
	return ;
}
