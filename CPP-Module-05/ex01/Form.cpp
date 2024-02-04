#include "Form.hpp"

Form::Form(const std::string & name , const int & grade ,const int & gradeToSigne)
:_name(name),_signedValue(false), _grade(grade), _gradeToSigne(gradeToSigne)
{
	std::cout << DEFAULT_CONSTRUCTOR_FORM << std::endl;
}

Form::~Form(void)
{
	std::cout << DESTRUCTOR_FORM << std::endl;
}

void Form::beSigned(const Bureaucrat & arg)
{
	if(arg.getGrade() <= this->_grade)
		this->_signedValue = true;
	else
		this->_signedValue = false;
}

std::string Form::getName(void) const { return this->_name; };

bool Form::getSignedValue(void) const { return this->_signedValue; };

int Form::getGrade(void) const { return this->_grade; };

int Form::getGradeToSigne(void) const { return this->_gradeToSigne; };

Form::GradeTooHighException::GradeTooHighException(const std::string & msg): message(msg)
{}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {} ;

const char * Form::GradeTooHighException::what(void) const throw()
{
	return this->message.c_str();
}

Form::GradeTooLowException::GradeTooLowException(const std::string & msg): message(msg)
{}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {} ;

const char * Form::GradeTooLowException::what(void) const throw()
{
	return this->message.c_str();
}

std::ostream &operator<<(std::ostream & stream, const Form & arg)
{
	stream << "Name : " << arg.getName() << std::endl << "SignedValue : ";
	(arg.getSignedValue()) ? (stream << "true") : (stream << "false");
	stream << std::endl;
	stream << "Grade : " << arg.getGrade() << std::endl \
	<< "GradeToSigne : " << arg.getGradeToSigne() << std::endl;
	return stream;
}