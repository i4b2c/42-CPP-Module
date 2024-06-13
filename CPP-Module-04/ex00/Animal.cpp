#include "Animal.hpp"

void Animal::makeSound(void) const
{
	std::cout << "Animal: Undefined Sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal::Animal(void): type("Undefined Animal")
{
	#if DEBUG_MSG == 1
    std::cout << "Default Animal constructor called" << std::endl;
	#endif
}

Animal::~Animal(void)
{
	#if DEBUG_MSG == 1
    std::cout << "Animal destructor called" << std::endl;
	#endif
}

/*
Dog Class
*/
Dog::Dog(void): Animal()
{
    this->type = "Dog";
	#if DEBUG_MSG == 1
    std::cout << "Default Dog constructor called" << std::endl;
	#endif
}

Dog::~Dog(void)
{
	#if DEBUG_MSG == 1
    std::cout << "Dog destructor called" << std::endl;
	#endif
}

void Dog::makeSound() const
{
	std::cout << "Animal: Woof Woof" << std::endl;
}

/*
Cat Class
*/
Cat::Cat(void): Animal()
{
    this->type = "Cat";
	#if DEBUG_MSG == 1
    std::cout << "Default Cat constructor called" << std::endl;
	#endif
}

Cat::~Cat(void)
{
	#if DEBUG_MSG == 1
    std::cout << "Cat destructor called" << std::endl;
	#endif
}

void Cat::makeSound() const
{
	std::cout << "Animal: Meow Meow" << std::endl;
}
