#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {

	Zombie*	ptr = new Zombie(name);
	return (ptr);
}

void	randomChump( std::string name ) {

	Zombie zombie(name);
	zombie.announce();

	return;
}

int main(void) {

	std::cout << "\tlet's allocate zombies on the stack" << std::endl;
	randomChump("Michel");
	randomChump("Francoise");

	std::cout << std::endl << "\tnow on the heap" << std::endl;
	Zombie	*z1 = newZombie("Daniel");
	z1->announce();
	Zombie	*z2 = newZombie("Benedicte");
	z2->announce();
	std::cout << "and we don't forget to free them" << std::endl;
	delete z1;
	delete z2;

}
