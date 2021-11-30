#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void) {

	DiamondTrap didi("didi");
	std::cout << didi << std::endl;
	didi.attack("someone");
	didi.whoamI();

}
