#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define DEBUG_MSG 0

class Animal
{
    protected:
        std::string type;
    public:
        virtual void makeSound(void) const;
        std::string getType(void) const;

        Animal(void);
        virtual ~Animal(void);
};

class Dog: public Animal
{
    public:
        Dog(void);
        ~Dog(void);

		void makeSound(void) const;
};

class Cat: public Animal
{
    public:
        Cat(void);
        ~Cat(void);

		void makeSound(void) const;
};

#endif
