#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define GRADE_TO_SIGN_PRESIDENTIALPARDONFORM 25
#define GRADE_TO_EXEC_PRESIDENTIALPARDONFORM 5

#define DEFAULT_CONSTRUCTOR_PRESIDENTIALPARDONFORM "Default Constructor PresidentialPardonForm Called"
#define CONSTRUCTOR_PRESIDENTIALPARDONFORM "Constructor PresidentialPardonForm Called"
#define COPY_CONSTRUCTOR_PRESIDENTIALPARDONFORM "Copy Constructor PresidentialPardonForm Called"
#define DESTRUCTOR_PRESIDENTIALPARDONFORM "Destructor PresidentialPardonForm Called"
#define OPERATOR_EQUAL_PRESIDENTIALPARDONFORM "Operator equal PresidentialPardonForm Called"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(const std::string & target);
		~PresidentialPardonForm(void);

		void execute(Bureaucrat const & executor) const;
};

#endif
