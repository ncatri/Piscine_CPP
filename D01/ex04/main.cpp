#include <iostream>
#include <fstream>

int main(int argc, char **argv) {

	(void)argc;
	(void)argv;
	std::ifstream ifs("numbers");
	int	dst;
	int	dst2;
	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();
}

