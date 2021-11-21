#include "Phonebook.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>

Phonebook::Phonebook(void) {
	this->_index = -1;
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

void	Phonebook::_increment_index(void) {

	if (this->getIndex() < 7)
		this->_index++;
	return;
}

int		Phonebook::getIndex(void) const {

	return (this->_index);
}

int	Phonebook::add_contact(void) {

	this->_increment_index();
	this->_contacts[this->getIndex()].create_contact();

	return (0);
}

void	Phonebook::show_content(void) const {

	const std::string	separator = "|";
	const size_t		width = 10;
	const int			num_fields = 4;
	const int			total_width = num_fields * width + (num_fields + 1) * separator.size();
	const std::string	line = separator + std::string(total_width - 2, '-') + "|";

	std::cout << line << std::endl;
	std::cout << separator << std::setw(width) << "index" ;
	std::cout << separator << std::setw(width) << "first name" ;
	std::cout << separator << std::setw(width) << "last name";
	std::cout << separator << std::setw(width) << "phone" << separator << std::endl;
	std::cout << line << std::endl;
	for (int i = 0; i <= this->getIndex(); ++i) {
		this->_contacts[i].showAbstract(separator, width, i + 1); 
	}
	std::cout << line << std::endl;

	return;
}

void	Phonebook::launch(void) {

	std::string cmd;

	while (true)
	{
		std::cout << "Please enter a command (SEARCH, ADD or EXIT): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			std::cout << std::endl;
			cmd = "EXIT";
		}
		if (cmd == "ADD")
			this->add_contact();
		else if (cmd == "SEARCH")
			this->_search();
		else if (cmd == "EXIT") {
			std::cout << "goodbye!" << std::endl;
			break;
		}
		else
			std::cout << "sorry I didn't understand" << std::endl;
	}
	return;
}

void	Phonebook::_search(void) const {

	std::string					user_input;
	int							input_int = 0;

	this->show_content();
	if (this->getIndex() >= 0) {
		
		while (true) {
			std::cout << "Please enter an index: ";
			std::getline(std::cin, user_input);
			if (std::cin.eof()) {
				std::cin.clear();
				break;
			}
			if (!my_is_number(user_input)) {
				std::cout << "Invalid input." << std::endl;
			}
			else {
				std::istringstream(user_input) >> input_int;
				if (input_int <= 0 || input_int > this->getIndex() + 1)
					std::cout << "index not in valid range." << std::endl;
				else
					break;
			}
		}
		if (input_int)
			this->_contacts[input_int - 1].showComplete();
		std::cin.clear();
	}

	return;
}

bool	my_is_number(const std::string str) {

	std::string::const_iterator it = str.begin();

	while (it != str.end() && std::isdigit(*it))
		++it;
	return (!str.empty() && it == str.end());
}
