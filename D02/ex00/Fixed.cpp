#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( ) {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return;
}

Fixed::Fixed( Fixed const& src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( ) {

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

const int Fixed::_fractional_bits = 8;
