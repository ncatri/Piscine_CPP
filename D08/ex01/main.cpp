#include "Span.hpp"
#include <iostream>

int main(void) {
/*
	Span span(5);
	std::cout << span.getCapacity() << std::endl;
	for (unsigned int i = 0; i < 5; ++i) {
		try
		{
			span.addNumber(i*i);
		}
		catch (std::exception& e)
		{
			std::cout << "exception caught: " << e.what() << std::endl;
		}
	}
	try
	{
		std::cout << "longest span: " << span.longestSpan() << std::endl;
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "exception caught: " << e.what() << std::endl;
	}
*/
/*
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
*/
	Span sp(10);
	sp.addNumber(3);
	sp.addNumber(4);
	//sp.fillRandom();
	std::cout << sp;
	try
	{
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "exception caught: " << e.what() << std::endl;
	}

}
