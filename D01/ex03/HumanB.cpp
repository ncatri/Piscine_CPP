#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) :  _name(name) {
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB( void ) {
	return;
}

void	HumanB::attack( void ) {

	if (this->_weapon != NULL) {
		std::cout << this->_name << " attacks with his "
			<< this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " has no weapon" << std::endl;
	}
	return;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon; 
	return;
}
