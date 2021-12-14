#include "easyfind.hpp"
#include <iostream>

#include <vector>
#include <list>

int main(void) {

	std::list<int>	v;
	v.push_back(2);
	v.push_back(23);
	v.push_back(23);
	v.push_back(-8);
	v.push_back(17);

	try
	{
		int found = easyfind<>(v, 23);
		std::cout << "found: " << found << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "exception caught: " << e.what() << std::endl;
	}
}

