#include "ClapTrap.hpp"
#include <iostream>

int main(void) {

	ClapTrap trap1("Bobby");

	trap1.attack("foo");
	trap1.takeDamage(3);
	trap1.beRepaired(1);
	ClapTrap trap2(trap1);;
	trap2.attack("Bob");
}
