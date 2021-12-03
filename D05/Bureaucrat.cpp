#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("none"), _grade(0) {
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) :
	_name(name), _grade(grade) {
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
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const { return(this->_name); }
std::string	Bureaucrat::getGrade() const { return(this->_grade); }
