#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	Intern intern;
	Form *f;
	f = intern.makeForm("robotomy request", "target");
	if (f)
		std::cout << *f << std::endl;
}
