#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void) {
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

int	Phonebook::add_contact(void) {

	std::string	field[5];

	std::cout << "Entering new contact" << std::endl;
	std::cout << "first name: " << std::endl;
	std::cin >> field[0];
	std::cout << "last name: " << std::endl;
	std::cin >> field[1];
	std::cout << "nickname: " << std::endl;
	std::cin >> field[2];
	std::cout << "phone number: " << std::endl;
	std::cin >> field[3];
	std::cout << "darkest secret: " << std::endl;
	std::cin >> field[4];

	return (0);
}
