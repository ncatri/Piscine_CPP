#ifndef FIXED_H
#	define FIXED_H

#	include <iostream>

class Fixed {

	public:
		Fixed(void );
		Fixed( int const num );
		Fixed( float const float_num );
		Fixed( Fixed const& src );
		~Fixed( void );

		/* assignation operator */
		Fixed&	operator=( Fixed const& rhs );
		/* comparison operator */
		bool	operator<( Fixed const& rhs ) const;
		bool	operator>( Fixed const& rhs ) const;
		bool	operator>=( Fixed const& rhs ) const;
		bool	operator<=( Fixed const& rhs ) const;
		bool	operator==( Fixed const& rhs ) const;
		bool	operator!=( Fixed const& rhs ) const;
		/* arithmetic operator */
		Fixed&	operator+=( Fixed const& rhs );
		Fixed	operator+( Fixed const& rhs );
		Fixed	operator-( Fixed const& rhs );
		Fixed	operator*( Fixed const& rhs );
		Fixed	operator/( Fixed const& rhs );
		/*	increment and decrement */
		Fixed&	operator++( void ); //prefix increment
		Fixed	operator++(	int );	//postfix increment
		Fixed&	operator--(void ); //prefix decrement
		Fixed	operator--(	int );	//postfix decrement

		static Fixed& 		min( Fixed& a, Fixed& b );
		static Fixed const& min( Fixed const& a, Fixed const& b );
		static Fixed& 		max( Fixed& a, Fixed& b );
		static Fixed const& max( Fixed const& a, Fixed const& b );

		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private:
		int	_value;
		static const int _fractional_bits;

};

std::ostream&	operator<<( std::ostream& o, Fixed const& rhs);

#endif
