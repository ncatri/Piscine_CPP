#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void) {

	Point A = Point(0.1f, 0.1f);
	Point B = Point(10, 0);
	Point C = Point(8, 8); 
	std::cout << "Point A: " << A << std::endl;
	std::cout << "Point B: " << B << std::endl;
	std::cout << "Point C: " << C << std::endl;

	Point test1(3, 3);

	std::cout << "test1 : " << test1 << (bsp(A,B,C,test1) ? " inside" : " outside") << std::endl;
}
