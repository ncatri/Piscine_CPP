#include "easyfind.hpp"
#include <iostream>

#include <vector>
#include <list>

int main(void) {

	std::cout << "--- test with list ---" << std::endl;
	std::list<int>	v;
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(8);
	v.push_back(10);

	for (int i = 0; i <= 10; ++i) {
		try
		{
			easyfind<>(v, i);
			std::cout << "found: " << i << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "not found: " << i << std::endl;
		}
	}

	std::cout << "--- test with vector ---" << std::endl;
	{
		std::vector<int> v;	
		v.push_back(1);
		v.push_back(3);
		v.push_back(5);
		v.push_back(7);
		v.push_back(9);

		for (int i = 0; i <= 10; ++i) {
			try
			{
				easyfind<>(v, i);
				std::cout << "found: " << i << std::endl;
			}
			catch (std::exception& e)
			{
				std::cout << "not found: " << i << std::endl;
			}
		}
	}
}

