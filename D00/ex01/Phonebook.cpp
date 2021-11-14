#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void) {
	this->_index = 0;
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

int	Phonebook::add_contact(void) {

	this->_contacts[this->_index].create_contact();
	if (this->_index < 7)
		this->_index++;

	return (0);
}
