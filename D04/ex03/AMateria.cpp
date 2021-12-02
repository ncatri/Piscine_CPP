#include "AMateria.hpp"
/*
AMateria::AMateria( void ) {
	return;
}
AMateria::AMateria( std::string const& type ) : _type(type) { }

AMateria::AMateria( AMateria const& src ) : _type(src._type) {
	*this = src;
}

AMateria::~AMateria( ) {
	return;
}
	removing dtor/ctor definitions solved pb of "undefined symbols...vtable for AMateria
*/

AMateria&	AMateria::operator=( AMateria const& rhs ) {
	this->_type = rhs._type;
	return (*this);
}

std::string const& AMateria::getType( void ) const {
	return (this->_type);
}
