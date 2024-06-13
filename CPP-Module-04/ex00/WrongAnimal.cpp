#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("Undefined Wrong Animal")
{
	#if DEBUG_MSG == 1
	std::cout << "WrongAnimal Constructor Called" << std::endl;
	#endif
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

//WrongCat
void WrongCat::makeSound() const
{
	std::cout << "WrongAnimal: Woof Woof" << std::endl;
}

WrongCat::~WrongCat()
{
	#if DEBUG_MSG == 1
	std::cout << "WrongCat Destructor Called" << std::endl;
	#endif
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	#if DEBUG_MSG == 1
	std::cout << "WrongCat Constructor Called" << std::endl;
	#endif
}
