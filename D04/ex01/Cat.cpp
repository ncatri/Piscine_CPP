#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;

	this->_brain = new Brain;
	return;
}

Cat::Cat( Cat const& src ) {
	std::cout << "Cat copy constructor called" << std::endl;

	*this = src;
}

Cat::~Cat( ) {
	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;
	return;
}

Cat&	Cat::operator=( Cat const& rhs ) {
	std::cout << "Cat assignment operator called" << std::endl;

	if (this != &rhs) {
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain;
//		std::cout << "--" << std::endl;
		this->_brain = rhs._brain;
//		std::cout << "--" << std::endl;
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "meeaaooww" << std::endl;
}

void	Cat::addIdea( std::string idea ) {

	this->_brain->addIdea(idea);
	return;
}

void	Cat::showIdeas( void ) const {

	this->_brain->showIdeas();
	return;
}
