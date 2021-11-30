#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	return;
}

Cat::Cat( Cat const& src ) {

	*this = src;
}

Cat::~Cat( ) {
	return;
}

Cat&	Cat::operator=( Cat const& rhs ) {

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "meeaaooww" << std::endl;
}
