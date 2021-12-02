#include "CureMateria.hpp"

CureMateria::CureMateria( void ) : AMateria("Cure") { }

CureMateria::CureMateria( CureMateria const& src ) {

	*this = src;
}

CureMateria::~CureMateria( ) {
	return;
}

CureMateria&	CureMateria::operator=( CureMateria const& rhs ) {

	(void)rhs;
	return (*this);
}

AMateria	*CureMateria::clone( void ) const {

	AMateria	*clone = new CureMateria();
	*clone = *this;
	return (clone);
}
