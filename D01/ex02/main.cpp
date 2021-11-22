#include <iostream>

int main(void) {

	std::string string = "HI THIS IS BRAIN";

	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "address in memory of string: " << &string << std::endl;
	std::cout << "now displaying address using stringPTR: " << stringPTR <<  std::endl;
	std::cout << "now displaying address using stringREF: " << &stringREF << std::endl;
	std::cout << "displaying string using pointer: " << *stringPTR << std::endl;
	std::cout << "displaying string using reference: " << stringREF << std::endl;
}
