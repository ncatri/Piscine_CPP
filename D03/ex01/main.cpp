#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {

	ScavTrap st("John");
	std::cout << " ------ Test assignment operator ------" << std::endl << std::endl;
	{
		ScavTrap st2("Bobby");
		std::cout << st2 << std::endl;
		st2 = st;
		std::cout << st2 << std::endl;
	}
	std::cout << " ------ Test copy constructor -------" << std::endl << std::endl;
	{
		ScavTrap st2(st);
	}
	std::cout << " ------ Test attacks ------" << std::endl << std::endl;
	ClapTrap ct("clapi");
	st.attack("someone");
	ct.attack("someone else");
	std::cout << std::endl;
	st.takeDamage(4);
	st.beRepaired(2);
	st.guardGate();
}
