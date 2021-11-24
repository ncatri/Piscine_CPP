#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv) {

	Karen	karen;
	if (argc != 2) {
		std::cerr << "Usage: ./karenFilter <LOG_LEVEL>" << std::endl;
		return (1);
	}
	std::string userInput = argv[1];

	switch (resolveInput( userInput )) {
		case DEBUG:
			{
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("debug");
				std::cout << std::endl;
		   	}
		case INFO:
			{
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("info");
				std::cout << std::endl;
		   	}
		case WARNING:
			{
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("warning");
				std::cout << std::endl;
			}
		case ERROR:
			{
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("error");
				std::cout << std::endl;
				break;
			}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

log_level	resolveInput( std::string userInput ) {
	if (userInput == "DEBUG") return (DEBUG);
	else if (userInput == "INFO") return (INFO);
	else if (userInput == "WARNING") return (WARNING);
	else if (userInput == "ERROR") return (ERROR);
	else return (INVALID);
}

