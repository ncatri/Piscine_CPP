#ifndef BUREAUCRAT_H
#	define BUREAUCRAT_H

#	include <string>
#	include <iostream>
#	include "Form.hpp"

class Form;

class Bureaucrat {

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const& src );
		~Bureaucrat();

		Bureaucrat&	operator=( Bureaucrat const& rhs );

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade( int const grade );

		void	upgrade();
		void	downgrade();

		void	signForm(Form& form) const;
		void	executeForm( Form const& form ) const;

		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();	
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw(); 
		};

	private:

		Bureaucrat();
		const std::string 	_name;
		int					_grade;

};

std::ostream& operator<<( std::ostream& o, Bureaucrat& rhs );

#endif
