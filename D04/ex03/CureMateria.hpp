#ifndef CUREMATERIA_H
#	define CUREMATERIA_H

#	include "AMateria.hpp"

class CureMateria : public AMateria {

	public:
		CureMateria( void );
		CureMateria( CureMateria const& src );
		~CureMateria( void );

		CureMateria&	operator=( CureMateria const& rhs );

		AMateria* 	clone( void ) const;

	private:

};

#endif
