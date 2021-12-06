#ifndef SHRUBBERYCREATIONFORM_H
#	define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const& src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const& rhs );

		bool	execute( Bureaucrat const& executor ) const;

	private:
		ShrubberyCreationForm();

};

#endif
