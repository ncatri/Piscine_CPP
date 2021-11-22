#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon weapon) {

	this->_name = name;
	this->_weapon = weapon;
	return;
}

HumanA::~HumanA( void ) {
	return;
}

void	HumanA::attack( void ) {
	
	std::cout << this->_name << " attacks with his "
		<< this->_weapon.getType() << std::endl;
	return;
}
