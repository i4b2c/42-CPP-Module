#include "Bureaucrat.hpp"

//Bureaucrat Functions
const std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

//Constructor
Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    std::cout << DEFAULT_CONSTRUCTOR_BUREAUCRAT << std::endl;
    if(grade < 1)
        throw GradeTooHighException("Bureaucrat exception: Grade too high");
    else if(grade > 150)
        throw GradeTooLowException("Bureaucrat exception: Grade too low");
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat & cpy): name(cpy.getName()), grade(cpy.getGrade())
{
    std::cout << COPY_CONSTRUCTOR_BUREAUCRAT << std::endl;
}

//Destructor
Bureaucrat::~Bureaucrat(void)
{
    std::cout << DESTRUCTOR_BUREAUCRAT << std::endl;
}

//Grade too high Functions
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){};

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg): message(msg) {};

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return this->message.c_str();
}


//Grade too low Functions
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {};

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &msg): message(msg) {};

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return this->message.c_str();
}

//Ostream Function
std::ostream &operator<<(std::ostream &stream , Bureaucrat & student)
{
    stream << student.getName() << ", bureaucrat grade " << student.getGrade();
    return stream;
}