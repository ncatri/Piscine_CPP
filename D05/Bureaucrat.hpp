#ifndef BUREAUCRAT_H
#	define BUREAUCRAT_H

#	include <string>

class Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const& src );
		~Bureaucrat();

		Bureaucrat&	operator=( Bureaucrat const& rhs );

		std::string	getName() const;
		std::string	getGrade() const;

	private:

		const std::string 	_name;
		int					_grade;

};

#endif
