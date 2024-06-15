#ifndef DOG_HPP
#define DOG_HPP

#ifndef DEBUG_MSG
#define DEBUG_MSG 1
#endif

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
		Dog(const Dog &arg);
		Dog &operator=(const Dog &arg);
        ~Dog(void);

		void makeSound(void) const;
};

#endif //DOG_HPP
