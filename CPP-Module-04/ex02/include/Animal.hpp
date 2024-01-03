#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;

        Animal(void);
        virtual ~Animal(void);
};

class Dog: public Animal
{
    private:
        Brain *animalBrain;
    public:
        void makeSound(void) const;
        Dog(void);
        ~Dog(void);
};

class Cat: public Animal
{
    private:
        Brain *animalBrain;
    public:
        void makeSound(void) const;
        Cat(void);
        ~Cat(void);
};
