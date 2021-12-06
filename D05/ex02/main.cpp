#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testShrubbery(void);
void	testRobotomy(void);
void	testPresidential(void);

int main(void) {
//	Bureaucrat b("Bernard", -180);
//	std::cout << b.getName() << std::endl;

	std::cout << "--- ShrubberyCreationForm ---\n";
	testShrubbery();

	std::cout << "--- RobotomyRequestForm ---\n";
	testRobotomy();

	std::cout << "--- PresidentialPardon Form ---\n";
	testPresidential();
}

void testShrubbery(void) {
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
	b.signForm(s);
	b.executeForm(s);
	std::cout << "\teverything ok:\n";
	b.setGrade(130);
	ShrubberyCreationForm s2("home");
	std::cout << "bureaucrat: " << b << std::endl;
	std::cout << "form: " << s << std::endl;
	b.signForm(s2);
	b.executeForm(s2);
	std::cout << "\tbureaucrat has grade too low to sign:\n";
	ShrubberyCreationForm s3("home");
	b.setGrade(150);
	std::cout << "bureaucrat: " << b << std::endl;
	std::cout << "form: " << s3 << std::endl;
	b.signForm(s3);
}

void	testRobotomy(void) {
	std::cout << "\tform not signed: \n";
	Bureaucrat p("Patrick", 20);
	RobotomyRequestForm r("bad guy");
	p.executeForm(r);

	std::cout << "\tbureaucrat has grade too low to execute:\n";
	p.setGrade(70);
	p.signForm(r);
	p.executeForm(r);

	std::cout << "\tbureaucrat has grade too low to sign:\n";
	p.setGrade(73);
	p.signForm(r);

	std::cout << "\teverything ok:\n";
	p.setGrade(45);
	for (int i = 0; i < 8; ++i)
		p.executeForm(r);
}

void	testPresidential(void) {
	std::cout << "\tform not signed: \n";
	Bureaucrat	b("Mireille", 10);
	PresidentialPardonForm p("Billy the Kid");
	std::cout << "bureaucrat: " << b << std::endl;
	std::cout << "form: " << p << std::endl;
	b.executeForm(p);
	std::cout << "\tbureaucrat has grade too low to execute:\n";
	b.setGrade(20);
	std::cout << "bureaucrat: " << b << std::endl;
	std::cout << "form: " << p << std::endl;
	b.signForm(p);
	b.executeForm(p);
	std::cout << "\teverything ok:\n";
	b.setGrade(5);
	b.signForm(p);
	b.executeForm(p);
	std::cout << "\tbureaucrat has grade too low to sign:\n";
	b.setGrade(150);
	std::cout << "bureaucrat: " << b << std::endl;
	std::cout << "form: " << p << std::endl;
	b.signForm(p);
}
