#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#ifndef DEBUG_MSG
#define DEBUG_MSG 1
#endif

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &arg);
		WrongAnimal &operator=(WrongAnimal const &arg);
		virtual ~WrongAnimal();

		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif
