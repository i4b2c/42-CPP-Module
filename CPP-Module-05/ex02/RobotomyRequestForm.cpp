#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string & target)
: AForm("RobotomyRequestForm",target,GRADE_TO_EXEC_ROBOTOMYREQUESTFORM,GRADE_TO_SIGN_ROBOTOMYREQUESTFORM)
{
	// std::cout << DEFAULT_CONSTRUCTOR_ROBOTOMYREQUESTFORM << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << DESTRUCTOR_ROBOTOMYREQUESTFORM << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << "Bzzzzzzzzzzzzzzz" << std::endl;
		std::srand(time(0));
		int numRandom = std::rand() % 2;
		if(numRandom)
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "robotomy on " << executor.getName() << " failed" << std::endl;
	}
	else
		throw RobotomyRequestForm::AForm::GradeTooLowException();
}