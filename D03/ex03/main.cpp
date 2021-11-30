#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void) {

	DiamondTrap didi("didi");
	std::cout << didi << std::endl;
	didi.attack("someone");
	didi.whoamI();
	std::cout << "--- test assignment operator ---" << std::endl;
	DiamondTrap dt("lulu");
	std::cout << dt << std::endl;
	dt = didi;
	std::cout << dt << std::endl;


}
