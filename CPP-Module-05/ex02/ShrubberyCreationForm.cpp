#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
: AForm("ShrubberyCreationForm",GRADE_TO_SIGN_SHRUBBERY,GRADE_TO_EXEC_SHRUBBERY)
{
	std::cout << DEFAULT_CONSTRUCTOR_SHRUBBERY << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}