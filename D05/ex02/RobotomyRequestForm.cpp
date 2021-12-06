#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm( std::string target) :
	Form("RobotomyRequest", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& src ) {

	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( ) {
	return;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const& rhs ) {

	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::execute( Bureaucrat const& executor ) const {
	static int rand = 0;
	std::cout << " ** BRRRR BRRRR **" << std::endl;
	if (rand % 2)
		std::cout << this->getTarget() << " has been successfully robotomized
