#ifndef ROBOTOMYREQUESTFORM_H
#	define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const& src );
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator=( RobotomyRequestForm const& rhs );

		bool	execute( Bureaucrat const& executor ) const;

	private:
		RobotomyRequestForm();

};

#endif
