#ifndef FIXED_H
#	define FIXED_H

#	include <iostream>

class Fixed {

	public:
		Fixed(void );
		Fixed( int const num );
		Fixed( float const float_num ) {
		Fixed( Fixed const& src );
		~Fixed( void );

		Fixed&	operator=( Fixed const& rhs );

		int		getRawBits( void ) const;
		void	setRawBits(int const raw);

	private:
		int	_value;
		static const int _fractional_bits;

};

std::ostream&	operator<<( std::ostream& o, Fixed const& rhs);

#endif
