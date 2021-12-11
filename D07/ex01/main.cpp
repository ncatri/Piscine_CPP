#include "iter.hpp"
#include "template.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

#define ARRAY_SIZE (5)

void	display_string( std::string& str);
void	display_int( int& num);

int main(void) {
	
//	std::string array[ARRAY_SIZE] = { "salut", "coucou", "bonjour", "beau temps aujourd'hui n'est-ce pas?", "et la famille?" };
//	iter(array, ARRAY_SIZE, display_string);

//	int	array[ARRAY_SIZE] = { 2, 23, 43, 9, -3 };
//	iter(array, ARRAY_SIZE, display_int);

	Bureaucrat	array[ARRAY_SIZE] = {Bureaucrat("Jean-Phi", 23), Bureaucrat("Micheline", 78), Bureaucrat("Henri", 134), Bureaucrat("Christelle", 94), Bureaucrat("Robert", 8) };
	iter(array, ARRAY_SIZE, templated_display);
	std::cout << std::endl;

}

void	display_string( std::string& str) {
	std::cout << str << std::endl;
}

void	display_int( int& num) {
	std::cout << num << std::endl;
}
