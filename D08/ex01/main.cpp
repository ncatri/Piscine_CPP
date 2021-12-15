#include "Span.hpp"
#include <iostream>

int main(void) {

	std::cout << "--- basic tests ---" << std::endl;
	{
		std::srand(unsigned(std::time(NULL)));
		Span span(5);
		for (unsigned int i = 0; i < 8; ++i) {
			try
			{
				span.addNumber(std::rand() % 20);
			}
			catch (std::exception& e)
			{
				std::cout << "exception caught: " << e.what() << std::endl;
				break;
			}
		}
		std::cout << span;
		try
		{
			std::cout << "longest span: " << span.longestSpan() << std::endl;
			std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "exception caught: " << e.what() << std::endl;
		}
	}

	std::cout << "--- subject test ---" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << "--- big test ---" << std::endl;
	{
		try
		{
			Span sp(10000);
			//sp.addNumber(3);
			//sp.addNumber(9);
			//sp.addNumber(4);
			std::cout << "size of span: " << sp.getVector().size() << std::endl;
			sp.fillRandom();
	//		std::cout << sp;
			std::cout << "longest span: " << sp.longestSpan() << std::endl;
			std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "exception caught: " << e.what() << std::endl;
		}
	}

}
