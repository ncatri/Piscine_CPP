#include "Animal.hpp"
#include "Cat.hpp"

int	main( void ) {

	Animal	*furby = new Animal();
	furby->makeSound();
	std::cout << furby->getType() << std::endl;

	Animal	*kitty = new Cat();
	kitty->makeSound();
	std::cout << kitty->getType() << std::endl;
}
