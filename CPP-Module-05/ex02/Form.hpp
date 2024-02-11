#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#define DEFAULT_CONSTRUCTOR_FORM "Default Constructor Form Called"
#define CONSTRUCTOR_FORM "Constructor Form Called"
#define COPY_CONSTRUCTOR_FORM "Copy Constructor Form Called"
#define DESTRUCTOR_FORM "Destructor Form Called"
#define OPERATOR_EQUAL_FORM "Operator '=' Bureaucrat Called"

class AForm
{
	private:
		const std::string	_name;
		bool				_signedValue;
		const int			_gradeToExecute;
		const int			_gradeToSigne;
	public:
		AForm(const std::string & name , const int & grade ,const int & gradeToSigne);
		AForm(const AForm & cpy);
		~AForm(void);

		virtual void beSigned(const Bureaucrat & arg) = 0;

		virtual std::string getName(void) const = 0;
		virtual bool getSignedValue(void) const = 0;
		virtual int getGradeToExecute(void) const = 0;
		virtual int getGradeToSigne(void) const = 0;

		//Class
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(void) throw();
				~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(void) throw();
				~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream & stream, const AForm & arg);

#endif