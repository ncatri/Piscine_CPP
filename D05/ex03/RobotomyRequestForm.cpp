#include "RobotomyRequestForm.hpp"

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

bool	RobotomyRequestForm::execute( Bureaucrat const& executor ) const {

	bool		ret = true;
	static int 	fake_rand = 0;
	try
	{
		this->execRequirementsOK(executor);
		std::cout << " ** BRRRR BRRRR **" << std::endl;
		if (++fake_rand % 2)
			std::cout << this->getTarget() << " has been successfully robotomized" << std::endl;
		else
			std::cout << "failure to robotomize " << this->getTarget() << std::endl;
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
