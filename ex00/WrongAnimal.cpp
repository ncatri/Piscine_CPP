#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("animal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) :
	_type(type) {
	std::cout << "WrongAnimal default parametric constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const& src ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal( ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const& rhs ) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	
	if (this != &rhs) {
		this->_type = rhs._type; //self assignation guard
	}
	return (*this);
}

std::string	WrongAnimal::getType( void ) const {
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "** generic animal sound **" << std::endl;
}
