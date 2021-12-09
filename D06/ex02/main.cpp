#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base	*generate( void );
void	identify( Base *p );
void	identify( Base& p );

int main(void) {

	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
}

Base	*generate( void ) {

	int 	random_num;
	Base	*base;
	srand(time(NULL));

	random_num = rand() % 3;

	if (random_num == 0) {
		base = new C();
		std::cout << "creating C" << std::endl;
	}
	else if (random_num == 1) {
		base = new A();
		std::cout << "creating A" << std::endl;
	}
	else {
		base = new B();
		std::cout << "creating B" << std::endl;
	}
	return (base);
}

void	identify( Base *p ) {
	void	*test;

	test = dynamic_cast<A*>(p);
	if (test) {
		std::cout << "A" << std::endl;
		return;
	}

	test = dynamic_cast<B*>(p);
	if (test) {
		std::cout << "B" << std::endl;
		return;
	}

	test = dynamic_cast<C*>(p);
	if (test) {
		std::cout << "C" << std::endl;
		return;
	}
	
}

void	identify( Base& p ) {
	try
	{
		A& test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)test;
	}
	catch (std::bad_cast &bc)
	{
		(void)bc;
		try
		{
			B& test = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			(void)test;
		}
		catch (std::bad_cast &bc)
		{
			std::cout << "C" << std::endl;
			(void)bc;
		}
	}
}
