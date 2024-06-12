#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        void makeSound(void) const;
        std::string getType(void) const;

        Animal(void);
        ~Animal(void);
};

class Dog: public Animal
{
    public:
        Dog(void);
        ~Dog(void);
};

class Cat: public Animal
{
    public:
        Cat(void);
        ~Cat(void);
};

#endif