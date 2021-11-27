#include "Point.hpp"

Point::Point( void ) : _x(Fixed(0)), _y(Fixed(0)) {
	return;
}

Point::Point( const Fixed a, const Fixed b) : _x(a), _y(b) {
	return;
}

Point::Point( Point const& src ) : _x(src._x), _y(src._y) {

	return;
}

Point::~Point( ) {
	return;
}

Fixed const	Point::getX( void ) const {
	return (this->_x);
}

Fixed const	Point::getY( void ) const {
	return (this->_y);
}

Point&	Point::operator=( Point const& rhs ) {

	(void)rhs;
	return (*this);
}

std::ostream& operator<<( std::ostream& o, Point const& pt ) {
	o << "(" << pt.getX() << ", " << pt.getY() << ")";
	return (o);
}

