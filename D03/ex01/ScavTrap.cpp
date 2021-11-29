#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) { 

	std::cout << "ScavTrap parametric constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap( ScavTrap const& src ) : ClapTrap(src) {

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap( ) {

	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const& rhs ) {

	std::cout << "ScavTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << this->getName() << " entered Gate keeper mode" << std::endl;
	return;
}
