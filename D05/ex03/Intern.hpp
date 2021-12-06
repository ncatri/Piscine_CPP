#ifndef INTERN_H
#	define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public:
		Intern();
		Intern( Intern const& src );
		~Intern();

		Intern&	operator=( Intern const& rhs );

		Form	*makeForm( std::string name, std::string target ) const;

	private:

		Form	*_makeShrubbery( std::string target ) const;
		Form	*_makeRobotomy( std::string target ) const;
		Form	*_makePardon( std::string target ) const;


};

#endif
