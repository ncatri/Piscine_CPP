#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat() : _name("none"), _grade(150) {
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const& src ) {

	*this = src;
}

Bureaucrat::~Bureaucrat( ) {
	return;
}

Bureaucrat&	Bureaucrat::operator=( Bureaucrat const& rhs ) {

	if (this != &rhs) {
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const { return(this->_name); }
int			Bureaucrat::getGrade() const { return(this->_grade); }

void		Bureaucrat::upgrade() {
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::downgrade() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm( Form& form ) const {

	try
	{
		form.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " cannot sign " << form.getName()
			<< " because " << e.what() << std::endl;
		return;
	}
	std::cout << this->_name << " signs " << form.getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream& operator<<( std::ostream& o, Bureaucrat& rhs ) {
	o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();
	return (o);
}
