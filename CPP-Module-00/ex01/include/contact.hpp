#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::endl;

class Contact
{
	private:
		string first_name;
		string last_name;
		string nickname;
		string phone_number;
		string darkest_secret;
	public:
		void setInfo();
		void printInfo();
		string returnFirstName();
		string returnLastName();
		string returnNickname();
		string returnPhone();
		string returnSecret();

};

void print_menu();

#endif
