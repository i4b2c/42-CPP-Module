#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define GRADE_TO_SIGN_ROBOTOMYREQUESTFORM 72
#define GRADE_TO_EXEC_ROBOTOMYREQUESTFORM 45

#define DEFAULT_CONSTRUCTOR_ROBOTOMYREQUESTFORM "Default Constructor RobotomyRequestForm Called"
#define CONSTRUCTOR_ROBOTOMYREQUESTFORM "Constructor RobotomyRequestForm Called"
#define COPY_CONSTRUCTOR_ROBOTOMYREQUESTFORM "Copy Constructor RobotomyRequestForm Called"
#define DESTRUCTOR_ROBOTOMYREQUESTFORM "Destructor RobotomyRequestForm Called"
#define OPERATOR_EQUAL_ROBOTOMYREQUESTFORM "Operator equal RobotomyRequestForm Called"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(const std::string & target);
		~RobotomyRequestForm(void);

		void execute(Bureaucrat const & executor) const;
};

#endif
