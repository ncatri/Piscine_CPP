#include "CureMateria.hpp"
#include <iostream>

CureMateria::CureMateria( void ) : AMateria("cure") { }

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

void		CureMateria::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
