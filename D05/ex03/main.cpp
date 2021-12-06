#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void) {
	Bureaucrat low("low", 140);
	Bureaucrat	mid("mid", 70);
	Bureaucrat	high("high", 5);
	Intern intern;
	Form *f;
	std::cout << "--- test 1 ---" << std::endl;
	f = intern.makeForm("robotomy request", "target");
	if (f) {
		std::cout << *f << std::endl;
		low.executeForm(*f);
		low.signForm(*f);
		mid.signForm(*f);
		mid.executeForm(*f);
	}
	std::cout << "--- test 2 ---" << std::endl;
	f = intern.makeForm("shrubbery creation", "target");
	if (f) {
		std::cout << *f << std::endl;
		low.executeForm(*f);
		low.signForm(*f);
		mid.signForm(*f);
		mid.executeForm(*f);
	}
	std::cout << "--- test 3 ---" << std::endl;
	f = intern.makeForm("presidential pardon", "target");
	if (f) {
		std::cout << *f << std::endl;
		low.executeForm(*f);
		low.signForm(*f);
		mid.signForm(*f);
		mid.executeForm(*f);
		high.executeForm(*f);
		high.signForm(*f);
		high.executeForm(*f);
	}
	std::cout << "--- test 4 ---" << std::endl;
	f = intern.makeForm("other form", "target");
	if (f)
		std::cout << *f << std::endl;
}
