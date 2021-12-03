#include "Character.hpp"
#include <iostream>

Character::Character( ) {
	return;
}

Character::Character( std::string name) : _name(name) {

	for (int i = 0; i < INVENTORY_SIZE; ++i)
		this->_inventory[i] = NULL;
}

Character::Character( Character const& src ) {

	*this = src;
}

Character::~Character( ) {
	return;
}

Character&	Character::operator=( Character const& rhs ) {

	this->_name = rhs._name;
	for (int i = 0; i < INVENTORY_SIZE; ++i) {
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

std::string const&	Character::getName( void ) const { return (this->_name); }

void	Character::equip( AMateria *m ) {

	if (m && (m->getType().compare("cure") == 0 || m->getType().compare("ice") == 0 )) {
		for (int i = 0; i < INVENTORY_SIZE; ++i) {
			if ( this->_inventory[i] == NULL ) {
				this->_inventory[i] = m;
				std::cout << this->getName()
						<< " equiped a materia of type "
						<< m->getType()
						<< " at slot " << i << std::endl;
				break;
			}
		}
	}
}

void	Character::unequip( int idx ) {
	
	if (idx >= 0 && idx < INVENTORY_SIZE) {
		this->_inventory[idx] = NULL;
		std::cout << "materia successfully equiped at slot "
			<< idx << std::endl;
	}
}

void	Character::use( int idx, ICharacter& target ) {

	if (idx >= 0 && idx < INVENTORY_SIZE) {
		if (this->_inventory[idx] == NULL)
			std::cout << "no materia equiped at slot " << idx << std::endl;
		else
			this->_inventory[idx]->use(target);
	}
	return;
}
