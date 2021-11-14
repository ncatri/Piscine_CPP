#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	std::cout << this->_firstname << ' ' << this->_lastname << " is deleted" << std::endl;
	return ;
}

std::string Contact::getFirstname(void) const {
	return (this->_firstname);
}

void	Contact::setFirstname(std::string fname) {
	this->_firstname = fname;
}

std::string Contact::getLastname(void) const {
	return (this->_lastname);
}

void	Contact::setLastname(std::string lname) {
	this->_lastname = lname;
}

std::string Contact::getNickname(void) const {
	return (this->_nickname);
}

void	Contact::setNickname(std::string nname) {
	this->_nickname = nname;
}

std::string Contact::getPhone_number(void) const {
	return (this->_phone_number);
}

void	Contact::setPhone_number(std::string phonenum) {
	this->_phone_number = phonenum;
}

std::string Contact::getDarkest_secret(void) const {
	return (this->_darkest_secret);
}

void	Contact::setDarkest_secret(std::string secret) {
	this->_darkest_secret = secret;
}
