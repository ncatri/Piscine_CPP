#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( void ) : _type("void")  { }

AMateria::AMateria( std::string const& type ) : _type(type) { }

AMateria::AMateria( AMateria const& src ) : _type(src._type) {
	*this = src;
}

AMateria::~AMateria( ) { }

AMateria&	AMateria::operator=( AMateria const& rhs ) {

	this->_type = rhs._type;
	return (*this);
}

std::string const& AMateria::getType( void ) const { return (this->_type); }

void	AMateria::use( ICharacter& target) {
	std::cout << "Materia " << this->_type << " does nothing to target" << std::endl;
	(void)target;
}
