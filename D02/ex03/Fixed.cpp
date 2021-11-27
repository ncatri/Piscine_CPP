#include "Fixed.hpp"
#include <iostream>
#include <bitset>
#include <cmath>

const int Fixed::_fractional_bits = 8;

Fixed::Fixed( void ) {

	this->_value = 0;
	return;
}

Fixed::Fixed( Fixed const& src ) {

	*this = src;
}

Fixed::~Fixed( void ) {

	return;
}

Fixed&	Fixed::operator=( Fixed const& rhs ) {

	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {

	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {

	this->_value = raw;
	return;
}

Fixed::Fixed( int const int_num ) {

	this->_value = (int_num << Fixed::_fractional_bits); 
}

Fixed::Fixed( float const float_num ) {

	this->_value = roundf(float_num * ( 1 << Fixed::_fractional_bits));
}

int		Fixed::toInt( void ) const {

	return (this->_value >> Fixed::_fractional_bits);
}

float	Fixed::toFloat( void ) const {

	return (this->_value * (1 / (float)( 1 << Fixed::_fractional_bits)));
}

std::ostream&	operator<<( std::ostream& o, Fixed const& rhs) {

	o << rhs.toFloat();
	return (o);
}

/* ****** Formulas ******** *
 *	fixe = float * 2^fraction
 *	float = fixe / (2^fraction)
 *	(bitshift) x << y = x * 2^y
 */

bool	Fixed::operator<( Fixed const& rhs ) const {

	return ((this->toFloat() - rhs.toFloat()) < 0);
}

bool	Fixed::operator>( Fixed const& rhs ) const {

	Fixed const& lhs = *this;
	return ( rhs < lhs );
}

bool	Fixed::operator>=( Fixed const& rhs ) const {

	Fixed const& lhs = *this;
	return ( !(lhs < rhs) );
}

bool	Fixed::operator<=( Fixed const& rhs ) const {

	Fixed const& lhs = *this;
	return ( !(lhs > rhs) );
}

bool	Fixed::operator==( Fixed const& rhs ) const {

	Fixed const& lhs = *this;
	return ( lhs.getRawBits() == rhs.getRawBits() );
}

bool	Fixed::operator!=( Fixed const& rhs ) const {

	Fixed const& lhs = *this;
	return ( !(lhs == rhs) );
}

Fixed&	Fixed::operator+=( Fixed const& rhs ) {

	float new_value = this->toFloat() + rhs.toFloat();
	this->setRawBits( Fixed(new_value).getRawBits() );
	return (*this);
}

Fixed	Fixed::operator+( Fixed const& rhs ) {

	Fixed	lhs = *this;
	return ( lhs += rhs );
}

Fixed	Fixed::operator-( Fixed const& rhs ) const {

	return ( Fixed(this->toFloat() - rhs.toFloat()) );
}

Fixed	Fixed::operator*( Fixed const& rhs ) {

	return ( Fixed(this->toFloat() * rhs.toFloat()) );
}

Fixed	Fixed::operator/( Fixed const& rhs ) {

	return ( Fixed(this->toFloat() / rhs.toFloat()) );
}

Fixed&	Fixed::operator++( void ) {

	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(	int ) {

	Fixed old = *this;
	++old;
	return (old);
}

Fixed&	Fixed::operator--( void ) {
//prefix
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--( int ) {
//postfix
	Fixed old = *this;
	--old;
	return (old);
}

Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	
	std::cout << "in 1st min()" << std::endl;
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed const& Fixed::min( Fixed const& a, Fixed const& b ) {
	
	std::cout << "in overloaded min()" << std::endl;
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	
	std::cout << "in 1st max()" << std::endl;
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const& Fixed::max( Fixed const& a, Fixed const& b ) {
	
	std::cout << "in overloaded max()" << std::endl;
	if (a > b)
		return (a);
	else
		return (b);
}
