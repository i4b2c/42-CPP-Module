#include "AForm.hpp"

AForm::AForm(const AForm & cpy)
: _name(cpy.getName()),_signedValue(cpy.getSignedValue()),
_gradeToExecute(cpy.getGradeToExecute()),_gradeToSigne(cpy.getGradeToSigne())
{
	std::cout << OPERATOR_EQUAL_FORM << std::endl;
}

AForm::AForm(const std::string & name ,const std::string & target,const int & gradeToExecute ,const int & gradeToSigne)
:_name(name),_target(target),_signedValue(false),_gradeToExecute(gradeToExecute),_gradeToSigne(gradeToSigne)
{
	std::cout << CONSTRUCTOR_FORM << std::endl;
	if(gradeToSigne <= 0 || gradeToExecute <= 0)
		throw AForm::GradeTooHighException();
	else if(gradeToSigne > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(void)
{
	std::cout << DESTRUCTOR_FORM << std::endl;
}

void AForm::beSigned(const Bureaucrat & arg)
{
	if(arg.getGrade() <= this->_gradeToExecute)
	{
		this->_signedValue = true;
		arg.signForm(this->_name,this->_signedValue);
	}
	else
	{
		arg.signForm(this->_name,this->_signedValue);
		throw AForm::GradeTooLowException();
	}
}

std::string AForm::getName(void) const { return this->_name; };

std::string AForm::getTarget(void) const { return this->_target; };

bool AForm::getSignedValue(void) const { return this->_signedValue; };

int AForm::getGradeToExecute(void) const { return this->_gradeToExecute; };

int AForm::getGradeToSigne(void) const { return this->_gradeToSigne; };

AForm::GradeTooHighException::GradeTooHighException(void) throw() {}

AForm::GradeTooHighException::~GradeTooHighException(void) throw() {} ;

const char * AForm::GradeTooHighException::what(void) const throw()
{
	return "Form exception: Grade too high";
}

AForm::GradeTooLowException::GradeTooLowException(void) throw() {}

AForm::GradeTooLowException::~GradeTooLowException(void) throw() {} ;

const char * AForm::GradeTooLowException::what(void) const throw()
{
	return "Form exception: Grade too low";
}

std::ostream &operator<<(std::ostream & stream, const AForm & arg)
{
	stream << "Name : " << arg.getName() << std::endl << "SignedValue : ";
	(arg.getSignedValue()) ? (stream << "true") : (stream << "false");
	stream << std::endl;
	stream << "Grade To Execute : " << arg.getGradeToExecute() << std::endl \
	<< "Grade To Signe : " << arg.getGradeToSigne() << std::endl;
	return stream;
}