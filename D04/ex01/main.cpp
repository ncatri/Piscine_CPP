#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define	NUM_ANIMALS (4)

int	main( void ) {

	Animal	*animals[NUM_ANIMALS];

	std::cout << "--- init array ---" << std::endl;
	for (int i = 0; i < NUM_ANIMALS; ++i) {
		if (i < NUM_ANIMALS / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl << "--- test array ---" << std::endl;
	for (int i = 0; i < NUM_ANIMALS; ++i)
		animals[i]->makeSound();
	std::cout << std::endl <<  "--- delete array ---" << std::endl;
	for (int i = 0; i < NUM_ANIMALS; ++i)
		delete animals[i];

	std::cout << std::endl << "--- test copy ---" << std::endl;
	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	cat1->addIdea("I'm hungry");
	cat1->addIdea("I like fish");
	std::cout << "cat1 ideas:" << std::endl;
	cat1->showIdeas();
	std::cout << "cat2 ideas:" << std::endl;
	cat2->showIdeas();
	std::cout << "*cat2 = *cat1 and adding idea to cat2" << std::endl;
	*cat2 = *cat1;
	cat2->addIdea("I will go fishing");
	std::cout << "cat2 ideas:" << std::endl;
	cat2->showIdeas();
	std::cout << "cat1 ideas:" << std::endl;
	cat1->showIdeas();

	delete cat1;
	delete cat2;

	std::cout << std::endl << "--- test subject ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}
