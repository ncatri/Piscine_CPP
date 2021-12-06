#include "Intern.hpp"

Intern::Intern( ) {
	return;
}

Intern::Intern( Intern const& src ) {

	*this = src;
}

Intern::~Intern( ) {
	return;
}

Intern&	Intern::operator=( Intern const& rhs ) {
	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm( std::string name, std::string target ) const {

	std::string forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	typedef Form *(Intern::*Actions)( std::string ) const;
	Actions actions[3] = {
		&Intern::_makeShrubbery,
		&Intern::_makeRobotomy,
		&Intern::_makePardon,
	};
	for (int i = 0; i < 3; ++i) {
		if ( name.compare(forms[i]) == 0 ) {
			std::cout << "Intern creates " << forms[i] << " form" << std::endl;
			return (this->*actions[i])(target);
		}
	}
	std::cout << "error: unknown form name" << std::endl;
	return (NULL);
}

Form	*Intern::_makeShrubbery( std::string target ) const {
	Form	*f = new ShrubberyCreationForm(target);
	return (f);
}

Form	*Intern::_makeRobotomy( std::string target ) const {
	Form	*f = new RobotomyRequestForm(target);
	return (f);
}

Form	*Intern::_makePardon( std::string target ) const {
	Form	*f = new PresidentialPardonForm(target);
	return (f);
}
