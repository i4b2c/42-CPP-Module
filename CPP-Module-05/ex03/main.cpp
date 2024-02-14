#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    {
        Intern formMaker;
        Bureaucrat Student("icaldas",4);
        AForm * newForm = formMaker.makeForm("shrubbery creation",Student.getName());
        newForm->beSigned(Student);
        Student.executeForm(*newForm);
        delete newForm;
    }
    {
        Intern formMaker;
        Bureaucrat Student("icaldas",4);
        AForm * newForm = formMaker.makeForm("robotomy request",Student.getName());
        newForm->beSigned(Student);
        Student.executeForm(*newForm);
        delete newForm;
    }
    {
        Intern formMaker;
        Bureaucrat Student("icaldas",4);
        AForm * newForm = formMaker.makeForm("presidential pardon",Student.getName());
        newForm->beSigned(Student);
        Student.executeForm(*newForm);
        delete newForm;
    }
    return 0;
}