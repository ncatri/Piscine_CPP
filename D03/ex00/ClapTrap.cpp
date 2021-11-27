#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const name ) : 
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << this->_name << " is constructed" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const& src ) {

	std::cout << "copy of " << src.getName() << " is  constructed" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( ) {

	std::cout << this->_name << " is destructed" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const& rhs ) {

	std::cout << "overload of assignment operator called for " << rhs.getName() << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	return (*this);
}

std::string	ClapTrap::getName( void ) const {

	return (this->_name);
}

int	ClapTrap::getHitPoints( void ) const {
	return (this->_hitPoints);
}

void	ClapTrap::attack( std::string const& target ) {

	if (this->_hitPoints > 0) {
		this->_hitPoints--;
		std::cout << this->_name << " attacks " << target << " , causing ";
		std::cout << this->_attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << this->_name << " doesn't have enough hit points" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	this->_energyPoints -= amount;
	std::cout << this->_name << " took " << amount << " damage" << std::endl;
	return;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	this->_energyPoints += amount;
	std::cout << this->_name << " is repaired by " << amount << " points" << std::endl;
	return;
}
