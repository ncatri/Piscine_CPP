#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;

	this->_brain = new Brain;
	return;
}

Dog::Dog( Dog const& src ) {
	std::cout << "Dog copy constructor called" << std::endl;

	*this = src;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;

	delete this->_brain;
	return;
}

Dog&	Dog::operator=( Dog const& rhs ) {
	std::cout << "Dog assignment operator called" << std::endl;

	Animal::operator=(rhs);
	if (this != &rhs) {
		delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
	}

	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "woof woof" << std::endl;
}

void	Dog::addIdea( std::string idea ) {

	this->_brain->addIdea(idea);
	return;
}

void	Dog::showIdeas( void ) const {

	this->_brain->showIdeas();
	return;
}
