#include "Animal.hpp"

Animal::Animal( void ) : _type("animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) :
	_type(type) {
	std::cout << "Animal default parametric constructor called" << std::endl;
}

Animal::Animal( Animal const& src ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( ) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=( Animal const& rhs ) {
	std::cout << "Animal assignment operator called" << std::endl;
	
	if (this != &rhs) {
		this->_type = rhs._type; //self assignation guard
	}
	return (*this);
}

std::string	Animal::getType( void ) const {
	return (this->_type);
}

void	Animal::makeSound( void ) const {
	std::cout << "** generic animal sound **" << std::endl;
}

void	Animal::addIdea( std::string idea ) { (void)idea; }
void	Animal::showIdeas( void ) const { }
