#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try
	{
		Bureaucrat b("Bernard", 146);
		Form f("258B", 146, 120);
		std::cout << f << std::endl;
		f.beSigned(b);
		std::cout << f << std::endl;
		Form f2("233B", 140, 120);
		f2.beSigned(b);
		std::cout << f2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "\033[1;31mexception caught: \033[0m" << e.what() << std::endl;
	}
}
