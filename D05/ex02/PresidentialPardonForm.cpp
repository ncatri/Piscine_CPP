#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target) :
	Form("PresidentialPardon", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& src ) {

	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( ) {
	return;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const& rhs ) {

	(void)rhs;
	return (*this);
}

bool	PresidentialPardonForm::execute( Bureaucrat const& executor ) const {

	bool		ret = true;
	try
	{
		this->execRequirementsOK(executor);
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "\033[1;31mexception caught: \033[0;m" 
			<< executor.getName() << " cannot execute " << this->getName() << ": "
			<< e.what() << std::endl;
		ret = false;
	}
	return (ret);
}
