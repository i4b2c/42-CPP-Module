#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

#define DEFAULT_CONSTRUCTOR_SHRUBBERY "Default Constructor Shrubbery Called"

#define GRADE_TO_SIGN_SHRUBBERY 145
#define GRADE_TO_EXEC_SHRUBBERY 137

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);

		void beSigned(const Bureaucrat & arg);
		std::string getName(void) const;
		bool getSignedValue(void) const;
		int getGradeToExecute(void) const;
		int getGradeToSigne(void) const;
};

#endif
