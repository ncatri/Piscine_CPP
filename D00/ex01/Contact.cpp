#include "Contact.hpp"
#include <iostream>
#include <iomanip>

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

void	Contact::_enter_field(std::string message, void (Contact::*f)(std::string field)) {

	std::string	buffer;

	std::cout << message;
	std::getline(std::cin, buffer);
	(this->*f)(buffer);

	return;
}

void	Contact::create_contact(void) {

	this->_enter_field("enter firstname: ", &Contact::setFirstname);
	this->_enter_field("enter lastname: ", &Contact::setLastname);
	this->_enter_field("enter nickname: ", &Contact::setNickname);
	this->_enter_field("enter phone number: ", &Contact::setPhone_number);
	this->_enter_field("the darkest secret: ", &Contact::setDarkest_secret);

	return;
}

std::string		Contact::_getFormatted_field(const std::string field, const size_t width) const {

	std::string toShow;

	if (field.size() > width)
		toShow = field.substr(0, width - 1) + ".";
	else
		toShow = field;

	return (toShow);
}

void		Contact::showAbstract(const std::string sep, const size_t width, const int index) const {

	std::cout << sep << std::setw(width) << index;
	std::cout << sep << std::setw(width) << this->_getFormatted_field(this->getFirstname(), width);
	std::cout << sep << std::setw(width) << this->_getFormatted_field(this->getLastname(), width);
	std::cout << sep << std::setw(width) << this->_getFormatted_field(this->getPhone_number(), width);
	std::cout << sep << std::endl;

	return;
}

void	Contact::showComplete(void) const {

	std::cout << std::setw(20) << "First name: " << this->getFirstname() << std::endl;
	std::cout << std::setw(20) << "Last name: " << this->getLastname() << std::endl;
	std::cout << std::setw(20) << "nickname: " << this->getLastname() << std::endl;
	std::cout << std::setw(20) << "phone number: " << this->getLastname() << std::endl;
	std::cout << std::setw(20) << "darkest secret: " << this->getLastname() << std::endl;

	return;
}
