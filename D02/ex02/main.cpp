#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a(15.43f);
	Fixed b(15.45f);

	if (a < b)
		std::cout << a << " inferior to " << b <<std::endl;
	else
		std::cout << a << " not inferior to " << b <<std::endl;

	if (a > b)
		std::cout << a << " superior to " << b <<std::endl;
	else
		std::cout << a << " not superior to " << b <<std::endl;

	a = Fixed(4.3f);
	b = Fixed(5.71f);

	if (a >= b)
		std::cout << a << " superior or equal to " << b <<std::endl;
	else
		std::cout << a << " not superior or equal to " << b <<std::endl;
	if (a <= b)
		std::cout << a << " inferior or equal to " << b <<std::endl;
	else
		std::cout << a << " not inferior or equal to " << b <<std::endl;
	if (a == b)
		std::cout << a << " equal to " << b <<std::endl;
	if (a != b)
		std::cout << a << " different to " << b <<std::endl;

	a += b;
	std::cout << "a after a += b: " << a << std::endl;
	std:: cout << "a + b + 0.21: " << a + b + Fixed(0.21f) << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
	std::cout << "a - b - 10: " << a - b - Fixed(10) << std::endl;
	a = Fixed(15);
	b = Fixed(6.5f);
	std::cout << "new values. a: " << a << ", b: " << b << std::endl;
	std::cout << " a * b :" << a * b << ", a / b: " << a / b << std::endl;
	a = Fixed(0);
	std::cout << "a: " << a << ". ++a:" << ++a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a: " << a << " , --a: " << --a << " a--: " << a-- << std::endl;

	return (0);
}
