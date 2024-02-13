#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string & target)
: AForm("PresidentialPardonForm",target,GRADE_TO_EXEC_PRESIDENTIALPARDONFORM,GRADE_TO_SIGN_PRESIDENTIALPARDONFORM)
{
	std::cout << DEFAULT_CONSTRUCTOR_PRESIDENTIALPARDONFORM << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << DESTRUCTOR_PRESIDENTIALPARDONFORM << std::endl;
}

