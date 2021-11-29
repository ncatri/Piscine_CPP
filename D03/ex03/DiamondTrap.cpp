#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( DiamondTrap const& src ) : 
	FragTrap(src), ScavTrap(src), ClapTrap(src), _name(src.name) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( ) {

	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& rhs ) {

	std::cout << "DiamondTrap assignment operator called" << std::endl;
}

