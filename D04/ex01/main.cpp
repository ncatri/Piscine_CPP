#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main( void ) {

	Animal *j = new Cat();
	j->showIdeas();
	j->addIdea("manger");
	j->addIdea("dormir");
	j->showIdeas();
	Animal *i = new Cat();
	i->showIdeas();
	std::cout << "--" << std::endl;
	*i = *j;
	std::cout << "--" << std::endl;
	i->addIdea("kill someone");
	std::cout << "i ideas: ";
	i->showIdeas();
	std::cout << "j ideas: ";
	j->showIdeas();

	delete j;
	delete i;
}
