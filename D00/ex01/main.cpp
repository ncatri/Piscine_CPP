#include <iostream>
#include "Contact.hpp"

int main (void)
{
	Contact c1("Robert", "Louis", "Stevenson", "074568489", "loves donkeys");

	std::cout << "c1's first name: " << c1.getFirstname() << std::endl;
	c1.setFirstname("Robert");
	std::cout << "c1's first name: " << c1.getFirstname() << std::endl;

}
