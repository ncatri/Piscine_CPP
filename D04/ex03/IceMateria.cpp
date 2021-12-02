#include "IceMateria.hpp"

IceMateria::IceMateria( void ) : AMateria("Ice") { }

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
