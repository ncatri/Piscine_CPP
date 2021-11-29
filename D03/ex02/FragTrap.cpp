#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) { 

	std::cout << "FragTrap parametric constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap( FragTrap const& src ) : ClapTrap(src) {

	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap( ) {

	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=( FragTrap const& rhs ) {

	std::cout << "FragTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "FragTrap " << this->getName() << " displays a positive high five request" << std::endl;
	return;
}
