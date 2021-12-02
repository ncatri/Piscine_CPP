#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define	NUM_ANIMALS (4)

int	main( void ) {

//	Animal animal;
//	animal.getType();

//	Animal *animal = new Animal();
//	animal->getType();
	
	Dog	*dog = new Dog();
	dog->makeSound();
	delete dog;
}
