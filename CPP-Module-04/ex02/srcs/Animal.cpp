#include "../include/Animal.hpp"

void Animal::makeSound(void) const
{
    if(this->type == "Dog")
        std::cout << "woof woof" << std::endl;
    else if(this->type == "Cat")
        std::cout << "meow meow" << std::endl;
    else
        std::cout << "Undefined Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal::Animal(void): type("Undefined Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

//Dog class

Dog::Dog(void)
{
    this->type = "Dog";
    this->animalBrain = new Brain;
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
    delete this->animalBrain;
    std::cout << "Dog destructor called" << std::endl;
}

//Cat class

Cat::Cat(void)
{
    this->type = "Cat";
    this->animalBrain = new Brain;
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
    delete this->animalBrain;
    std::cout << "Cat destructor called" << std::endl;
}