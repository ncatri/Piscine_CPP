#ifndef BUREAUCRAT_H
#	define BUREAUCRAT_H

#	include <string>

class Bureaucrat {

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const& src );
		~Bureaucrat();

		Bureaucrat&	operator=( Bureaucrat const& rhs );

		std::string	getName() const;
		int			getGrade() const;

		void	upgrade();
		void	downgrade();

		class GradeTooHighException : public std::exception {
			public:
				std::string	getMessage() { return ("grade too high"); }
		};

		class GradeTooLowException : public std::exception {
			public:
				std::string	getMessage() { return ("grade too low"); }
		};

	private:

		Bureaucrat();
		const std::string 	_name;
		int					_grade;

};

#endif
