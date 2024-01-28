#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include "contact.hpp"

class PhoneBook
{
	private:
		size_t number_contacts;
		Contact contacts[8];
	public:
		PhoneBook(void);
		void addContact(void);
		void searchContact(void);
};

void pressEnterToContinue(void);

#endif
