#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#ifndef DEBUG_MSG
#define DEBUG_MSG 1
#endif

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
		Animal(const Animal &arg);
		Animal &operator=(const Animal &arg);
        virtual ~Animal(void);

        virtual void makeSound(void) const;
        std::string getType(void) const;
};

#endif
