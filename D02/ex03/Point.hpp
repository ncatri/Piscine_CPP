#ifndef POINT_H
#	define POINT_H

#include "Fixed.hpp"
#include <iostream>

class Point {

	public:
		Point( void );
		Point( Point const& src );
		Point( const Fixed a, const Fixed b);
		~Point( void );

		Fixed const	getX( void ) const;
		Fixed const	getY( void ) const;

		Point&	operator=( Point const& rhs );

	private:

		const Fixed _x;
		const Fixed _y;
};

std::ostream& operator<<( std::ostream& o, Point const& pt ); 

Fixed	sign(Point const p1, Point const p2, Point const p3);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
