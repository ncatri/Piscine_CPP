#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog( Dog const& src ) {
	std::cout << "Dog copy constructor called" << std::endl;

	*this = src;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog&	Dog::operator=( Dog const& rhs ) {
	std::cout << "Dog assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "woof woof" << std::endl;
}
