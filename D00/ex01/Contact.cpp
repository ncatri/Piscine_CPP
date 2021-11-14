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

void	Contact::enter_field(std::string message, void (Contact::*f)(std::string field)) {

	std::string	buffer;

	std::cout << message;
	std::cin >> buffer;
	(this->*f)(buffer);

	return;
}

void	Contact::create_contact(void) {

	this->enter_field("enter firstname :", &Contact::setFirstname);
	this->enter_field("enter lastname :", &Contact::setLastname);
	this->enter_field("enter nickname :", &Contact::setNickname);
	this->enter_field("enter phone number :", &Contact::setPhone_number);
	this->enter_field("the darkest secret:", &Contact::setDarkest_secret);

	return;
}
