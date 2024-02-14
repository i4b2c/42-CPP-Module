#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target)
: AForm("ShrubberyCreationForm",target,GRADE_TO_EXEC_SHRUBBERYCREATIONFORM,GRADE_TO_SIGN_SHRUBBERYCREATIONFORM)
{
	// std::cout << DEFAULT_CONSTRUCTOR_SHRUBBERYCREATIONFORM << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << DESTRUCTOR_SHRUBBERYCREATIONFORM << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << "Created file " << this->getTarget() << "_shrubbery" << std::endl;
		std::ofstream fileToOpen;
		fileToOpen.open((this->getTarget() + "_shrubbery").c_str());
		fileToOpen <<	"       &&&^&&()&*^&&" << std::endl;
		fileToOpen <<	"    && &&^&^^& ()|/ @, &&" << std::endl;
		fileToOpen <<	"   &&^(/&/&||/& /_/)_&/_&&*" << std::endl;
		fileToOpen <<	"  &() &&^&|()|/&&^ '% & &&^^*" << std::endl;
		fileToOpen <<	"&_&^^_&&_&^ |&()|&&/&__%_/_&&&" << std::endl;
		fileToOpen <<	"&&^^*&& & &| &| /& & % ()& /&&" << std::endl;
		fileToOpen <<	" ()&_---()&&^^*&&-&&--%---()~" << std::endl;
		fileToOpen <<	"     &&     |||     &-&" << std::endl;
		fileToOpen <<	"            |||" << std::endl;
		fileToOpen <<	"            |||" << std::endl;
		fileToOpen <<	"            |||" << std::endl;
		fileToOpen <<	"    , -=-~--.-^- _" << std::endl;
		fileToOpen.close();
	}
	else
		throw ShrubberyCreationForm::AForm::GradeTooLowException();
}
