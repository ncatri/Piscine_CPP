#include "Form.hpp"

Form::Form( std::string name, int sign, int execute) :
	_name(name), _signing_grade(sign), _executing_grade(execute), _signed(false) {

	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw GradeTooLowException();
	return;
}

Form::Form( Form const& src ) :
	_signing_grade(src.getSigningG()), _executing_grade(getExecutingG()) {

//	this->_signing_grade = src.getSigningG();
//	this->_executing_grade = src.getExecutingG();
	*this = src;
}

Form::~Form( ) {
	return;
}

Form&	Form::operator=( Form const& rhs ) {

	(void)rhs;
	return (*this);
}

std::ostream&	operator<<( std::ostream& o, Form& rhs ) {
	o << "Form " << rhs.getName() << " is ";
	if (!rhs.isSigned())
		o << "not ";
	o << "signed. (signing grade: " << rhs.getSigningG()
		<< ", executing grade: " << rhs.getExecutingG() << ")";
	return (o);
}

std::string	Form::getName() const { return(this->_name); }
int			Form::getSigningG() const { return(this->_signing_grade); }
int			Form::getExecutingG() const { return(this->_executing_grade); }
bool		Form::isSigned() const { return(this->_signed); }

void		Form::beSigned( Bureaucrat& b ) {
	if (b.getGrade() <= this->_signing_grade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}
