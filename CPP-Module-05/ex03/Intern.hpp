#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define DEFAULT_CONSTRUCTOR_INTERN "Default Constructor Intern Called"
#define CONSTRUCTOR_INTERN "Constructor Intern Called"
#define COPY_CONSTRUCTOR_INTERN "Copy Constructor Intern Called"
#define DESTRUCTOR_INTERN "Destructor Intern Called"
#define OPERATOR_EQUAL_INTERN "Operator equal Intern Called"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		AForm * makeForm(const std::string & type,const std::string & target);
};

#endif
