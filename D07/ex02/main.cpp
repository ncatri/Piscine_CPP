#include "Array.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main(void) {

	Array<Zombie> zombarray(6);
//	std::cout << "size: " << zombarray.size() << std::endl;

	for (unsigned int i = 0; i < zombarray.size(); ++i) {
		zombarray[i].announce();
	}

	std::cout << "--- test copy and assignment ---" << std::endl;

	Array<Zombie>	array2;
	array2 = zombarray;
	for (unsigned int i = 0; i < array2.size(); ++i) {
		std::ostringstream ss;
		ss << i;
		array2[i].setName("zombie_" + ss.str());
	}
	for (unsigned int i = 0; i < array2.size(); ++i) {
		array2[i].announce();
	}

	std::cout << "--- test other type ---" << std::endl;
	Array<int> intarray(8);
	for (unsigned int i = 0; i < intarray.size(); ++i) {
		std::cout << intarray[i] << std::endl;
	}

}
