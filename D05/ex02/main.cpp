#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

	std::cout << "--- ShrubberyCreationForm ---\n";
	try
	{
		std::cout << "\tform not signed: \n";
		Bureaucrat	b("Bernard", 130);
		ShrubberyCreationForm s("home");
		std::cout << "bureaucrat: " << b << std::endl;
		std::cout << "form: " << s << std::endl;
		b.executeForm(s);
		std::cout << "\tbureaucrat has grade too low to execute:\n";
		b.setGrade(140);
		std::cout << "bureaucrat: " << b << std::endl;
		std::cout << "form: " << s << std::endl;
		s.beSigned(b);
		std::cout << "\teverything ok:\n";
		b.setGrade(130);
		ShrubberyCreationForm s2("home");
		std::cout << "bureaucrat: " << b << std::endl;
		std::cout << "form: " << s << std::endl;
		s2.beSigned(b);
		b.executeForm(s2);
		std::cout << "\tbureaucrat has grade too low to sign:\n";
		ShrubberyCreationForm s3("home");
		b.setGrade(150);
		std::cout << "bureaucrat: " << b << std::endl;
		std::cout << "form: " << s3 << std::endl;
		s3.beSigned(b);
	}
	catch (std::exception& e)
	{
		std::cout << "\033[1;31mexception caught: \033[0;m" << e.what() << std::endl;
	}
}
