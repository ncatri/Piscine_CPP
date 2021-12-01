#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	Animal	*furby = new Animal();
	furby->makeSound();
	std::cout << "type: " <<  furby->getType() << std::endl << std::endl;

	Animal	*kitty = new Cat();
	kitty->makeSound();
	std::cout << "type: " <<  kitty->getType() << std::endl << std::endl;

	Animal	*doggy = new Dog();
	doggy->makeSound();
	std::cout << "type: " <<  doggy->getType() << std::endl << std::endl;

	std::cout << std::endl << "--- test Wrong animals ---" << std::endl << std::endl;
	WrongAnimal	*Wkitty = new WrongCat();
	Wkitty->makeSound();
	std::cout << "type: " <<  Wkitty->getType() << std::endl;

}
