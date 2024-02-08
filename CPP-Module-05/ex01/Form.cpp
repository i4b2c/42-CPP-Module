#include "Form.hpp"

Form::Form(const std::string & name , const int & gradeToExecute ,const int & gradeToSigne)
:_name(name),_signedValue(false),_gradeToExecute(gradeToExecute),_gradeToSigne(gradeToSigne)
{
	std::cout << DEFAULT_CONSTRUCTOR_FORM << std::endl;
	if(gradeToSigne <= 0 || gradeToExecute <= 0)
		throw GradeTooHighException("Form exception: Grade too high");
	else if(gradeToSigne > 150 || gradeToExecute > 150)
		throw GradeTooLowException("Form exception: Grade too low");
}

Form::~Form(void)
{
	std::cout << DESTRUCTOR_FORM << std::endl;
}

void Form::beSigned(const Bureaucrat & arg)
{
	if(arg.getGrade() <= this->_gradeToExecute)
		this->_signedValue = true;
	else
		this->_signedValue = false;
}

std::string Form::getName(void) const { return this->_name; };

bool Form::getSignedValue(void) const { return this->_signedValue; };

int Form::getGradeToExecute(void) const { return this->_gradeToExecute; };

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
	stream << "Grade : " << arg.getGradeToExecute() << std::endl \
	<< "GradeToSigne : " << arg.getGradeToSigne() << std::endl;
	return stream;
}