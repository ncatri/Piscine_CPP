#ifndef FORM_H
#	define FORM_H

#	include <string>
#	include <iostream>
#	include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		Form();
		Form( std::string name, int sign, int execute, std::string target );
		Form( Form const& src );
		virtual ~Form();

		Form&	operator=( Form const& rhs );

		std::string	getName() const;
		int			getSigningG() const;
		int			getExecutingG() const;
		bool		isSigned() const;
		std::string	getTarget() const;

		void			beSigned( Bureaucrat const& b );
		virtual bool	execute( Bureaucrat const& executor ) const = 0;

		class	GradeTooHighException : public std::exception {
			public:
				const char*	what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw();
		};
		class	FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};

	protected:

		bool	execRequirementsOK( Bureaucrat const& executor) const;

	private:

		const	std::string	_name;
		const	int			_signing_grade;
		const	int			_executing_grade;
		bool				_signed;
		const	std::string	_target;

};

std::ostream&	operator<<( std::ostream& o, Form& rhs );

#endif
