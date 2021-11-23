#include "Karen.hpp"
#include <iostream>

int main(void) {

	Karen	karen;

	std::cout << "Karen at debug level: " << std::endl;
	karen.complain("debug");
	std::cout << "Karen at info level: " << std::endl;
	karen.complain("info");
	std::cout << "Karen at warning level: " << std::endl;
	karen.complain("warning");
	std::cout << "Karen at error level: " << std::endl;
	karen.complain("error");
	std::cout << "Karen at unknown level: " << std::endl;
	karen.complain("something");
	karen.complain("");
	karen.complain("infowarning");

}
