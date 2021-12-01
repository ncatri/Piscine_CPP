#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	return;
}

Dog::Dog( Dog const& src ) {

	*this = src;
}

Dog::~Dog( void ) {
	return;
}

Dog&	Dog::operator=( Dog const& rhs ) {

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "woof woof" << std::endl;
}
