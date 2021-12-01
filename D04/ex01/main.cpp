#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void ) {

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	cat1->addIdea("I'm hungry");
	cat1->addIdea("I like fish");
	std::cout << "-- start copy ---" << std::endl;
	*cat2 = *cat1;
	std::cout << "-- end copy ---" << std::endl;
	cat2->addIdea("I will go fishing");

	cat1->showIdeas();
	cat2->showIdeas();

	delete cat1;
	delete cat2;
}
