#include "ICharacter.hpp"

ICharacter::ICharacter( ) {
	return;
}

ICharacter::ICharacter( ICharacter const& src ) {

	*this = src;
}

ICharacter::~ICharacter( ) {
	return;
}

ICharacter&	ICharacter::operator=( ICharacter const& rhs ) {
	(void)rhs;
	return (*this);
}

