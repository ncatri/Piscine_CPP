#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {

	try {
		Bureaucrat b("bob", 0);
		std::cout << "grade: " << b.getGrade() << std::endl;
	}
	catch (std::exception& e) {
		Bureaucrat::GradeTooHighException g;
		std::cout << g.getMessage() << std::endl;
	}
}
