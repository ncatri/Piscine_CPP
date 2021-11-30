#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_name("no_name"), _hitPoints(0), _energyPoints(0), _attackDamage(0) {

	std::cout << "Claptrap default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string const name , int hp = 10, int ep = 10, int ad = 0) : 
	_name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {

	std::cout << "Claptrap parametric constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const& src ) {

	std::cout << "Claptrap copy constructor called "<< std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "Claptrap destructor called" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const& rhs ) {

	std::cout << "Claptrap overload of assignment operator called" << std::endl;

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName( void ) const { return (this->_name); }
int	ClapTrap::getHitPoints( void ) const { return (this->_hitPoints); }
int	ClapTrap::getEnergyPoints( void ) const { return (this->_energyPoints); }
int	ClapTrap::getAttackDamage( void ) const { return (this->_attackDamage); }


void	ClapTrap::setName( std::string const name ) {

	this->_name = name;
	return;
}

void	ClapTrap::attack( std::string const& target ) {

	if (this->_hitPoints > 0) {
		this->_hitPoints--;
		std::cout << this->_name << " the ClapTrap attacks " << target << " , causing ";
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

std::ostream&	operator<<(std::ostream& o, ClapTrap const& rhs) {

	o << rhs.getName() << ": " << rhs.getHitPoints() << "(hit points), "
		<< rhs.getEnergyPoints() << "(energy points), "
		<< rhs.getAttackDamage() << "(attack damage)";
	return (o);
}
