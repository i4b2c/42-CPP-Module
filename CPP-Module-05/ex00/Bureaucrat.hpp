#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

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
                const std::string message;
            public:
                ~GradeTooHighException(void) throw();
                GradeTooHighException(const std::string &msg);
                const char * what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            private:
                const std::string message;
            public:
                ~GradeTooLowException(void) throw();
                GradeTooLowException(const std::string &msg);
                const char * what() const throw();
        };
};

std::ostream &operator<<(std::ostream &stream , Bureaucrat & student);

#endif