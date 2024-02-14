#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << DEFAULT_CONSTRUCTOR_INTERN << std::endl;
}

Intern::~Intern(void)
{
	std::cout << DESTRUCTOR_INTERN << std::endl;
}

static AForm * ShrubberyCreation(const std::string & target)
{
	return  new ShrubberyCreationForm(target);
}

static AForm * RobotomyCreation(const std::string & target)
{
	return new RobotomyRequestForm(target);
}

static AForm * PresidentialCreation(const std::string & target)
{
	return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm(const std::string & type,const std::string & target)
{
	AForm * newForm = NULL;

	const std::string form_names[3] = {"shrubbery creation","robotomy request","presidential pardon"};

	typedef AForm* (*form_constructor_ptr)(const std::string &);
	form_constructor_ptr types[3] = {&ShrubberyCreation,&RobotomyCreation,&PresidentialCreation};

	for(int i = 0; i < 3; i++)
	{
		if(form_names[i] == type)
			newForm = types[i](target);
	}
	if(!newForm)
		std::cout << "Form : " << type << "doesn't exist!" << std::endl;
	return newForm;
}