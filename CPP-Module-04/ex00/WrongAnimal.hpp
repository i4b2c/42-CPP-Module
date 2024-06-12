#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define DEBUG_MSG 1

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();

		virtual void makeSound() const;

		std::string getType(void) const;
};

class WrongCat: public WrongAnimal
{
	public:
		void makeSound() const;	
		WrongCat();
		~WrongCat();
};

#endif
