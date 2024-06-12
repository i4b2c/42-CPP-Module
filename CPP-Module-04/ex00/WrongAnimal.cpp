#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("Non Wrong Animal")
{
	#if DEBUG_MSG == 1
	std::cout << "Wrong Animal created" << std::endl;
	#endif
}

WrongAnimal::~WrongAnimal()
{
	#if DEBUG_MSG == 1
	std::cout << "Wrong Animal destroyed" << std::endl;
	#endif
}

void WrongAnimal::makeSound() const 
{
	std::cout << "WrongAnimal: ..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

//WrongCat
void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Woof Woof" << std::endl;
}

WrongCat::~WrongCat()
{
	#if DEBUG_MSG == 1
	std::cout << "Good Bye Little Wrong Cat" << std::endl;
	#endif
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	#if DEBUG_MSG == 1
	std::cout << "Good Morning Little Wrong Cat" << std::endl;
	#endif
}
