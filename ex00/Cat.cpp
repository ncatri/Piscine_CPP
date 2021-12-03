#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat( Cat const& src ) {
	std::cout << "Cat copy constructor called" << std::endl;

	*this = src;
}

Cat::~Cat( ) {
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat&	Cat::operator=( Cat const& rhs ) {
	std::cout << "Cat assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "meeaaooww" << std::endl;
}
