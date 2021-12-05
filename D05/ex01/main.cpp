#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat	b("Bernard", 142);
	Form		f("53B", 142, 120);
	std::cout << b << std::endl << f << std::endl;
	b.signForm(f);
	std::cout << f << std::endl;
	b.downgrade();
	b.signForm(f);
}
