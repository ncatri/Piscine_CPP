#include "IceMateria.hpp"
#include <iostream>

IceMateria::IceMateria( void ) : AMateria("ice") { }

IceMateria::IceMateria( IceMateria const& src ) {

	*this = src;
}

IceMateria::~IceMateria( ) {
	return;
}

IceMateria&	IceMateria::operator=( IceMateria const& rhs ) {

	(void)rhs;
	return (*this);
}

AMateria	*IceMateria::clone( void ) const {

	AMateria	*clone = new IceMateria();
	*clone = *this;
	return (clone);
}

void		IceMateria::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
