#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define GRADE_TO_SIGN_SHRUBBERYCREATIONFORM 145
#define GRADE_TO_EXEC_SHRUBBERYCREATIONFORM 137

#define DEFAULT_CONSTRUCTOR_SHRUBBERYCREATIONFORM "Default Constructor ShrubberyCreationForm Called"
#define CONSTRUCTOR_SHRUBBERYCREATIONFORM "Constructor ShrubberyCreationForm Called"
#define COPY_CONSTRUCTOR_SHRUBBERYCREATIONFORM "Copy Constructor ShrubberyCreationForm Called"
#define DESTRUCTOR_SHRUBBERYCREATIONFORM "Destructor ShrubberyCreationForm Called"
#define OPERATOR_EQUAL_SHRUBBERYCREATIONFORM "Operator equal ShrubberyCreationForm Called"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(const std::string & target);
		~ShrubberyCreationForm(void);

		void execute(Bureaucrat const & executor) const;

};

#endif
