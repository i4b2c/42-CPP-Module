#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#define DEFAULT_CONSTRUCTOR_FORM "Default Constructor Form Called"
#define DESTRUCTOR_FORM "Destructor Form Called"

class Form
{
	private:
		const std::string	_name;
		bool				_signedValue;
		const int			_gradeToExecute;
		const int			_gradeToSigne;
	public:
		Form(const std::string & name , const int & grade ,const int & gradeToSigne);
		~Form(void);

		void beSigned(const Bureaucrat & arg);

		std::string getName(void) const;
		bool getSignedValue(void) const;
		int getGradeToExecute(void) const;
		int getGradeToSigne(void) const;

		//Class
		class GradeTooHighException: public std::exception
		{
			private:
				const std::string message;
			public:
				GradeTooHighException(const std::string & msg);
				~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			private:
				const std::string message;
			public:
				GradeTooLowException(const std::string & msg);
				~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream & stream, const Form & arg);

#endif