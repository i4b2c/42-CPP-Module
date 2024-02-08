#include "Form.hpp"

Form::Form(const Form & cpy)
: _name(cpy.getName()),_signedValue(cpy.getSignedValue()),
_gradeToExecute(cpy.getGradeToExecute()),_gradeToSigne(cpy.getGradeToSigne())
{
	std::cout << OPERATOR_EQUAL_FORM << std::endl;
}

Form::Form(const std::string & name , const int & gradeToExecute ,const int & gradeToSigne)
:_name(name),_signedValue(false),_gradeToExecute(gradeToExecute),_gradeToSigne(gradeToSigne)
{
	std::cout << CONSTRUCTOR_FORM << std::endl;
	if(gradeToSigne <= 0 || gradeToExecute <= 0)
		throw Form::GradeTooHighException();
	else if(gradeToSigne > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	std::cout << DESTRUCTOR_FORM << std::endl;
}

void Form::beSigned(const Bureaucrat & arg)
{
	if(arg.getGrade() <= this->_gradeToExecute)
	{
		this->_signedValue = true;
		arg.signForm(this->_name,this->_signedValue);
	}
	else
	{
		arg.signForm(this->_name,this->_signedValue);
		throw Form::GradeTooLowException();
	}
}

std::string Form::getName(void) const { return this->_name; };

bool Form::getSignedValue(void) const { return this->_signedValue; };

int Form::getGradeToExecute(void) const { return this->_gradeToExecute; };

int Form::getGradeToSigne(void) const { return this->_gradeToSigne; };

Form::GradeTooHighException::GradeTooHighException(void) throw() {}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {} ;

const char * Form::GradeTooHighException::what(void) const throw()
{
	return "Form exception: Grade too high";
}

Form::GradeTooLowException::GradeTooLowException(void) throw() {}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {} ;

const char * Form::GradeTooLowException::what(void) const throw()
{
	return "Form exception: Grade too low";
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