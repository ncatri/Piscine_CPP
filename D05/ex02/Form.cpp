#include "Form.hpp"

Form::Form() : _signing_grade(0), _executing_grade(0) {}

Form::Form( std::string name, int sign, int execute, std::string target ) :
	_name(name), _signing_grade(sign), _executing_grade(execute), _signed(false), _target(target) {

	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw GradeTooLowException();
	return;
}

Form::Form( Form const& src ) :
	_signing_grade(src.getSigningG()), _executing_grade(getExecutingG()) {

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
	o << "Form " << rhs.getName() << " (";
	if (!rhs.isSigned())
		o << "not ";
	o << "signed, signing grade: " << rhs.getSigningG()
		<< ", executing grade: " << rhs.getExecutingG() << ")";
	return (o);
}

std::string	Form::getName() const { return(this->_name); }
int			Form::getSigningG() const { return(this->_signing_grade); }
int			Form::getExecutingG() const { return(this->_executing_grade); }
bool		Form::isSigned() const { return(this->_signed); }
std::string	Form::getTarget() const { return(this->_target); }

void		Form::beSigned( Bureaucrat const& b ) {
	if (b.getGrade() <= this->_signing_grade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

bool		Form::execRequirementsOK(Bureaucrat const& executor ) const {

	bool ret = false;
	if (!this->_signed)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->_executing_grade)
		throw GradeTooLowException();
	else
		ret = true;
	return (ret);
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

const char*	Form::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}
