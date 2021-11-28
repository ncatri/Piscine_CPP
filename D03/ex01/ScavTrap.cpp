#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {

	std::cout << "ScavTrap default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const& src ) : ClapTrap(src) {

	std::cout << "ScavTrap default constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( ) {
	return;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const& rhs ) {

	std::cout << "ScavTrap default constructor called" << std::endl;
	
}

