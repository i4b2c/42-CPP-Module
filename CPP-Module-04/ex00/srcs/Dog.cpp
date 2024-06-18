#include "../include/Dog.hpp"

Dog::Dog(void): Animal()
{
    this->type = "Dog";
	#if DEBUG_MSG == 1
	std::cout << "Dog Default Constructor Called" << std::endl;
	#endif
}

Dog::Dog(const Dog &arg): Animal()
{
	this->type = arg.type;
	#if DEBUG_MSG == 1
    std::cout << "Dog Copy Constructor Called" << std::endl;
	#endif
}

Dog &Dog::operator=(const Dog &arg)
{
	if(this != &arg)
		this->type = arg.type;
	#if DEBUG_MSG == 1
    std::cout << "Dog Copy Assigment Called" << std::endl;
	#endif
	return *this;
}

Dog::~Dog(void)
{
	#if DEBUG_MSG == 1
    std::cout << "Dog destructor called" << std::endl;
	#endif
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof Woof" << std::endl;
}

