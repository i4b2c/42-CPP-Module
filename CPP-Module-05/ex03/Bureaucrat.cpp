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

void Bureaucrat::signForm(const std::string &name, bool &signedValue) const
{
    if(signedValue)
        std::cout << this->name << " signed " << name << std::endl;
    else
        std::cout << this->name << " couldn’t sign " << name \
        << " because not enough grade" << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
    if(form.getSignedValue())
    {
        std::cout << this->name << " executed " << form.getName() << std::endl;
        form.execute(*this);
    }
    else
        std::cout << form.getName() << " isn't signed yet." << std::endl;
}

//Constructor
Bureaucrat::Bureaucrat(void)
{
    // std::cout << DEFAULT_CONSTRUCTOR_BUREAUCRAT << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name,const int grade): name(name)
{
    // std::cout << CONSTRUCTOR_BUREAUCRAT << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & cpy): name(cpy.getName()), grade(cpy.getGrade())
{
    // std::cout << COPY_CONSTRUCTOR_BUREAUCRAT << std::endl;
}

//Destructor
Bureaucrat::~Bureaucrat(void)
{
    // std::cout << DESTRUCTOR_BUREAUCRAT << std::endl;
}

//operator
Bureaucrat &Bureaucrat::operator=(Bureaucrat & cpy)
{
    const_cast<std::string &>(this->name) = cpy.getName();
    this->grade = cpy.getGrade();
    // std::cout << OPERATOR_EQUAL_BUREAUCRAT << std::endl;
    return *this;
}

//Grade too high Functions
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){};

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw(){};

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat exception: Grade too high";
}


//Grade too low Functions
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {};

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw() {};

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat exception: Grade too low";
}

//Ostream Function
std::ostream &operator<<(std::ostream &stream , Bureaucrat & student)
{
    stream << student.getName() << ", bureaucrat grade " << student.getGrade();
    return stream;
}