#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    {
        try
        {
            Bureaucrat Student("icaldas",97);
            ShrubberyCreationForm Shrubbery("icaldas");
            Shrubbery.beSigned(Student);
            Student.executeForm(Shrubbery);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        try
        {
            Bureaucrat Student("icaldas",30);
            RobotomyRequestForm Robot("icaldas");
            Robot.beSigned(Student);
            Student.executeForm(Robot);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        try
        {
            Bureaucrat Student("Mr icaldas",4);
            PresidentialPardonForm Presidential("Mr icaldas");
            Presidential.beSigned(Student);
            Student.executeForm(Presidential);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        try
        {
            Bureaucrat Student("icaldas",100);
            RobotomyRequestForm Robot("icaldas");
            Robot.beSigned(Student);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}