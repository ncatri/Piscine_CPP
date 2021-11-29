#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) :
	ClapTrap(name + "_clap_name"), _name(name) {

	std::cout << "DiamondTrap parametric constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const& src ) : 
	FragTrap(src), ScavTrap(src), ClapTrap(src), _name(src._name) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& rhs ) {

	std::cout << "DiamondTrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	ClapTrap::operator=(rhs);
	return (*this);
}

