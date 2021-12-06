#ifndef PRESIDENTIALPARDONFORM_H
#	define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const& src );
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=( PresidentialPardonForm const& rhs );

		bool	execute( Bureaucrat const& executor ) const;

	private:
		PresidentialPardonForm();

};

#endif
