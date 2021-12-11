#include "iter.hpp"
#include <iostream>

#define ARRAY_SIZE (5)

void	display_string( std::string str);
void	display_int( int& num);

int main(void) {
	
//std::string array[ARRAY_SIZE] = { "salut", "coucou", "bonjour", "beau temps aujourd'hui n'est-ce pas?", "et la famille?" };

	int	array[ARRAY_SIZE] = { 2, 23, 43, 9, -3 };
	iter(array, ARRAY_SIZE, display_int);

}

void	display_string( std::string& str) {
	std::cout << str << std::endl;
}

void	display_int( int& num) {
	std::cout << num << std::endl;
}
