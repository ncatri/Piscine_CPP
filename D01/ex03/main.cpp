#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

int main(void) {

	Weapon	club = Weapon("crude spiked club");
//	std::cerr << "club type: " << club.getType() << std::endl;
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
std::cerr << "club type: " << club.getType() << std::endl;
	bob.attack();

}
