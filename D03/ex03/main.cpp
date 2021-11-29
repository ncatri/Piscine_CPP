#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void) {

	FragTrap st("John");
	std::cout << " ------ Test assignment operator ------" << std::endl << std::endl;
	{
		FragTrap st2("Bobby");
		std::cout << st2 << std::endl;
		st2 = st;
		std::cout << st2 << std::endl;
	}
	std::cout << " ------ Test copy constructor -------" << std::endl << std::endl;
	{
		FragTrap st2(st);
	}
	st.attack("someone");
	st.takeDamage(4);
	st.beRepaired(2);
}
