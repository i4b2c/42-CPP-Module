#include "../include/Cat.hpp"

Cat::Cat(void): Animal()
{
    this->type = "Cat";
	#if DEBUG_MSG == 1
    std::cout << "Default Cat constructor called" << std::endl;
	#endif
}

Cat::Cat(const Cat &arg): Animal()
{
	this->type = arg.type;
	#if DEBUG_MSG == 1
    std::cout << "Cat Copy Constructor Called" << std::endl;
	#endif
}

Cat &Cat::operator=(const Cat &arg)
{
	if(this != &arg)
		this->type = arg.type;
	#if DEBUG_MSG == 1
    std::cout << "Cat Copy Assigment Called" << std::endl;
	#endif
	return *this;
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
