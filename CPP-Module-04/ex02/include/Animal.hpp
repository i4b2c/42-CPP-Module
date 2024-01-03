#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        void makeSound(void) const;
        std::string getType(void) const;

        Animal(void);
        virtual ~Animal(void);
};

class Dog: public Animal
{
    private:
        Brain *animalBrain;
    public:
        Dog(void);
        ~Dog(void);
};

class Cat: public Animal
{
    private:
        Brain *animalBrain;
    public:
        Cat(void);
        ~Cat(void);
};
