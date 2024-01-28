#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name,int grade);
        virtual ~Bureaucrat(void);
        const std::string getName(void) const;
        int getGrade(void) const;
        class GradeTooHighException: public std::exception
        {
            private:
                const std::string message;// = "Bureaucrat Exception: Grade too high";
            public:
                ~GradeTooHighException(void) throw();
                GradeTooHighException(const std::string &msg);
                const char * what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            private:
                const std::string message;// = "Bureaucrat Exception: Grade too low";
            public:
                ~GradeTooLowException(void) throw();
                GradeTooLowException(const std::string &msg);
                const char * what() const throw();
        };
};

const std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if(grade < 1)
        throw GradeTooHighException("Bureaucrat exception: Grade too high");
    else if(grade > 150)
        throw GradeTooLowException("Bureaucrat exception: Grade too low");
    else
        this->grade = grade;
}

Bureaucrat::~Bureaucrat(void){};

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){};

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg): message(msg) {};

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return this->message.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {};

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &msg): message(msg) {};

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return this->message.c_str();
}

std::ostream &operator<<(std::ostream &stream , Bureaucrat & student)
{
    stream << student.getName() << ", bureaucrat grade " << student.getGrade();
    return stream;
}

int main(void)
{
    try
    {
        Bureaucrat ithalo("ithalo",1);
        std::cout << ithalo << std::endl;
        Bureaucrat josivaldo("josivaldo",149);
        std::cout << josivaldo << std::endl;
        Bureaucrat jeremias("jeremias",150);
        std::cout << jeremias << std::endl;
        Bureaucrat albertino("albertino",151);
        std::cout << albertino << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}