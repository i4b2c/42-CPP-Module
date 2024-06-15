#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("Undefined Wrong Animal")
{
	#if DEBUG_MSG == 1
	std::cout << "WrongAnimal Constructor Called" << std::endl;
	#endif
}

WrongAnimal::WrongAnimal(const WrongAnimal &arg)
: type(arg.type)
{
	#if DEBUG_MSG == 1
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	#endif
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &arg)
{
	if(this != &arg)
		this->type = arg.type;
	#if DEBUG_MSG == 1
	std::cout << "WrongAnimal Copy Assigment Called" << std::endl;
	#endif
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	#if DEBUG_MSG == 1
	std::cout << "WrongAnimal Destructor Called" << std::endl;
	#endif
}

void WrongAnimal::makeSound() const 
{
	std::cout << "WrongAnimal: Undefined Sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

