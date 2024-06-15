#ifndef CAT_HPP
#define CAT_HPP

#ifndef DEBUG_MSG
#define DEBUG_MSG 1
#endif

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
		Cat(const Cat &arg);
		Cat &operator=(const Cat &arg);
        ~Cat(void);

		void makeSound(void) const;
};

#endif
