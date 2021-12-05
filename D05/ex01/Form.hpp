#ifndef FORM_H
#	define FORM_H

#	include <string>
#	include <iostream>
#	include "Bureaucrat.hpp"

class Form {

	public:

		Form( std::string name, int sign, int execute );
		Form( Form const& src );
		~Form();

		Form&	operator=( Form const& rhs );

		std::string	getName() const;
		int			getSigningG() const;
		int			getExecutingG() const;
		bool		isSigned() const;

		void		beSigned( Bureaucrat& b );

		class	GradeTooHighException : public std::exception {
			public:
				const char*	what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw();
		};

	private:

		Form();
		const	std::string	_name;
		const	int			_signing_grade;
		const	int			_executing_grade;
		bool				_signed;

};

std::ostream&	operator<<( std::ostream& o, Form& rhs );

#endif
