#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

int main (void)
{
	Contact c1;
	Phonebook phonebook;

	c1.setFirstname("Robert");
	std::cout << "c1's first name: " << c1.getFirstname() << std::endl;
	c1.setFirstname("Bobby");
	std::cout << "c1's first name: " << c1.getFirstname() << std::endl;

	phonebook.add_contact();

}
