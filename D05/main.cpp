#include <iostream>
#include "Bureaucrat.hpp"

void	createBureaucratWithGrade(int grade);
void	test_downgrade(Bureaucrat b); 
void	test_upgrade(Bureaucrat b); 
void	test_constructor_grade2low(void);
void	test_constructor_grade2high(void);

int	main(void) {
	std::cout << "--- testing constructor ---" << std::endl;
	test_constructor_grade2low();
	test_constructor_grade2high();

	std::cout << "--- testing increment ---" << std::endl;
	Bureaucrat	b("Daniel", 75);
	test_downgrade(b);
	std::cout << "--- testing decrement ---" << std::endl;
	test_upgrade(b);
}

void test_constructor_grade2low(void) {

	try {
		for (int i = 1; i < 160; i += 10)
			createBureaucratWithGrade(i);
	}
	catch (std::exception& e) {
		std::cout << "\033[1;31mException caught: \033[0m" << e.what() << std::endl;;
	}
}

void test_constructor_grade2high(void) {

	try {
		for (int i = 150; i > -10; i -= 13)
			createBureaucratWithGrade(i);
	}
	catch (std::exception& e) {
		std::cout << "\033[1;31mException caught: \033[0m" << e.what() << std::endl;
	}
}

void	createBureaucratWithGrade(int grade) {
	Bureaucrat	tmp("Daniel", grade);
	std::cout << tmp << std::endl;
}

void	test_downgrade(Bureaucrat b) {
	try
	{
		while (true) {
			b.downgrade();
			std::cout << b << " | ";
		}
	}
	catch (std::exception& e)
	{
		std::cout << "\033[1;31mexception caught: \033[0m" << e.what() << std::endl;
	}
}

void	test_upgrade(Bureaucrat b) {
	try
	{
		while (true) {
			b.upgrade();
			std::cout << b << " | ";
		}
	}
	catch (std::exception& e)
	{
		std::cout << "\033[1;31mexception caught: \033[0m" << e.what() << std::endl;
	}
}
