#include "../include/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
	#if DEBUG_MSG == 1
	std::cout << "WrongCat Constructor Called" << std::endl;
	#endif
}

WrongCat::WrongCat(const WrongCat &arg): WrongAnimal()
{
	this->type = arg.type;
	#if DEBUG_MSG == 1
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	#endif
}

WrongCat &WrongCat::operator=(const WrongCat &arg)
{
	if(this != &arg)
		this->type = arg.type;
	#if DEBUG_MSG == 1
	std::cout << "WrongCat Copy Assigment Called" << std::endl;
	#endif
	return *this;
}

WrongCat::~WrongCat()
{
	#if DEBUG_MSG == 1
	std::cout << "WrongCat Destructor Called" << std::endl;
	#endif
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Meow Meow" << std::endl;
}
