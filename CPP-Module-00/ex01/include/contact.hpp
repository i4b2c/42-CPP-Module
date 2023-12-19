#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setInfo();
		void printInfo();
		std::string returnFirstName();
		std::string returnLastName();
		std::string returnNickname();
		std::string returnPhone();
		std::string returnSecret();

};

void	print_menu();

#endif
