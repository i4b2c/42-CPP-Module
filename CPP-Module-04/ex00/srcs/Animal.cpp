#include "../include/Animal.hpp"

Animal::Animal(void): type("Undefined Animal")
{
	#if DEBUG_MSG == 1
    std::cout << "Default Animal constructor called" << std::endl;
	#endif
}

Animal::Animal(const Animal &arg)
: type(arg.type)
{
	#if DEBUG_MSG == 1
	std::cout << "Animal Copy Constructor Called" << std::endl;
	#endif
}

Animal &Animal::operator=(Animal const &arg)
{
	if(this != &arg)
		this->type = arg.type;
	#if DEBUG_MSG == 1
	std::cout << "Animal Copy Assigment Called" << std::endl;
	#endif
	return *this;
}

Animal::~Animal(void)
{
	#if DEBUG_MSG == 1
    std::cout << "Animal destructor called" << std::endl;
	#endif
}

void Animal::makeSound(void) const
{
	std::cout << "Animal: Undefined Sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}
