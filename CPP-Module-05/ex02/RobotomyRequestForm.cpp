#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string & target)
: AForm("RobotomyRequestForm",target,GRADE_TO_EXEC_ROBOTOMYREQUESTFORM,GRADE_TO_SIGN_ROBOTOMYREQUESTFORM)
{
	std::cout << DEFAULT_CONSTRUCTOR_ROBOTOMYREQUESTFORM << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << DESTRUCTOR_ROBOTOMYREQUESTFORM << std::endl;
}

