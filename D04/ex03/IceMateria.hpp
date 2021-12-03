#ifndef ICEMATERIA_H
#	define ICEMATERIA_H

#	include "AMateria.hpp"

class IceMateria : public AMateria {

	public:
		IceMateria( void );
		IceMateria( IceMateria const& src );
		~IceMateria( void );

		IceMateria&	operator=( IceMateria const& rhs );

		AMateria* 	clone( void ) const;
		void		use( ICharacter& target );

	private:

};

#endif
