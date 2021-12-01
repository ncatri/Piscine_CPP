#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	return;
}

WrongCat::WrongCat( WrongCat const& src ) {

	*this = src;
}

WrongCat::~WrongCat( ) {
	return;
}

WrongCat&	WrongCat::operator=( WrongCat const& rhs ) {

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "meeaaooww" << std::endl;
}
