#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat	b("Bernard", 130);
	ShrubberyCreationForm s("home");
	std::cout << s << std::endl;
	try
	{
		b.signForm(s);
		s.execute(b);
	}
	catch (std::exception& e)
	{
		std::cout << "\033[1;31mexception caught: \033[0;m" << e.what()
			<< std::endl;
	}

}

