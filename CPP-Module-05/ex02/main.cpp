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
            // RobotomyRequestForm Robotomy("Robotomy");
            // PresidentialPardonForm President("President");
            Shrubbery.beSigned(Student);
            Student.executeForm(Shrubbery);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
}