#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>

#include "AForm.hpp"

#define DEFAULT_CONSTRUCTOR_BUREAUCRAT "Default Constructor Bureaucrat Called"
#define CONSTRUCTOR_BUREAUCRAT "Constructor Bureaucrat Called"
#define COPY_CONSTRUCTOR_BUREAUCRAT "Copy Constructor Bureaucrat Called"
#define DESTRUCTOR_BUREAUCRAT "Destructor Bureaucrat Called"
#define OPERATOR_EQUAL_BUREAUCRAT "Operator '=' Bureaucrat Called"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name,const int grade);
        Bureaucrat(const Bureaucrat & cpy);

        Bureaucrat &operator=(Bureaucrat & cpy);
        virtual ~Bureaucrat(void);

        const std::string getName(void) const;
        int getGrade(void) const;

        void signForm(const std::string &name,bool & signed_value) const;

        void executeForm(AForm const & form);

        class GradeTooHighException: public std::exception
        {
            public:
                GradeTooHighException(void)throw();
                ~GradeTooHighException(void) throw();
                const char * what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                GradeTooLowException(void) throw();
                ~GradeTooLowException(void) throw();
                const char * what() const throw();
        };
};

std::ostream &operator<<(std::ostream &stream , Bureaucrat & student);

#endif