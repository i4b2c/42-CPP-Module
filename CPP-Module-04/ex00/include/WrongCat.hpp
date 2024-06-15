#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#ifndef DEBUG_MSG
#define DEBUG_MSG 1
#endif

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &arg);
		WrongCat &operator=(const WrongCat &arg);
		~WrongCat();

		void makeSound() const;	
};

#endif
