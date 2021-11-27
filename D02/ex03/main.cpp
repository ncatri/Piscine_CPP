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
	Point test2(3, -3);
	Point test3(4.72f, 2.32f);
	Point test4(8, 8);
	Point test5(8.1f, 8);

	std::cout << "test1 : " << test1 << (bsp(A,B,C,test1) ? " inside" : " outside") << std::endl;
	std::cout << "test2 : " << test2 << (bsp(A,B,C,test2) ? " inside" : " outside") << std::endl;
	std::cout << "test3 : " << test3 << (bsp(A,B,C,test3) ? " inside" : " outside") << std::endl;
	std::cout << "test4 : " << test4 << (bsp(A,B,C,test4) ? " inside" : " outside") << std::endl;
	std::cout << "test5 : " << test5 << (bsp(A,B,C,test5) ? " inside" : " outside") << std::endl;
}
