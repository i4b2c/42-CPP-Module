#include "contact.hpp"

void Contact::setInfo(void)
{
	cout << "First Name: ";
	getline(cin, this->first_name);
	cin.clear();
	cout << "Last Name: ";
	getline(cin, this->last_name);
	cin.clear();
	cout << "Nickname: ";
	getline(cin, this->nickname);
	cin.clear();
	cout << "Phone Number: ";
	getline(cin, this->phone_number);
	cin.clear();
	cout << "Darkest Secret: ";
	getline(cin, this->darkest_secret);
	cin.clear();
}
void Contact::printInfo(void)
{
	cout << "First name: " << this->first_name << endl;
	cout << "Last name: " << this->last_name << endl;
	cout << "Nickname: " << this->nickname << endl;
	cout << "Phone number: " << this->phone_number << endl;
	cout << "Darkest secret: " << this->darkest_secret << endl;
}

string Contact::returnFirstName(void)
{
	return(this->first_name);
}

string Contact::returnLastName(void)
{
	return(this->last_name);
}

string Contact::returnNickname(void)
{
	return(this->nickname);
}

string Contact::returnPhone(void)
{
	return(this->phone_number);
}

string Contact::returnSecret(void)
{
	return(this->darkest_secret);
}
