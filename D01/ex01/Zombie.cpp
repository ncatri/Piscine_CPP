#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : _name(name) {

	return;
}

Zombie::Zombie( void ) {
	return;
}

Zombie::~Zombie( void ) {

	std::cerr << this->_name << " disappeared" << std::endl;
	return;
}

void	Zombie::announce( void ) {

	std::cout << '<' << this->_name << "> " << "BraiiiiinnnzzzZ" << std::endl;
	return ;
}

void	Zombie::setName( std::string name) {

	this->_name = name;
	return;
}

std::string	Zombie::getName( void ) {

	return (this->_name);
}
