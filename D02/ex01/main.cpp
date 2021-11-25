#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a;

	a.setRawBits(10);
	std::cout << "a is " << a << std::endl;

	return (0);
}
