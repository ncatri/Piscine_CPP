#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return;
}

Fixed::Fixed( Fixed const& src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed&	Fixed::operator=( Fixed const& rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {

	this->_value = raw;
	return;
}

Fixed::Fixed( int const int_num ) {

	std::cout << "Int constructor called" << std::endl;
	this->_value = int_num << Fixed::_fractional_bits;
}

Fixed::Fixed( float const float_num ) {

	std::cout << "Float constructor called" << std::endl;
	(void)float_num;
}

std::ostream&	operator<<( std::ostream& o, Fixed const& rhs) {

	int	integer_part;
	
	integer_part = rhs.getRawBits() >> _fractional_bits;
	o << integer_part;
}

const int Fixed::_fractional_bits = 8;
