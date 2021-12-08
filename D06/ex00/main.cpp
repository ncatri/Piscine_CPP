#include <iostream>

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./run <argument>" << std::endl;
		return (1);
	}

	std::string	rpz = argv[1];
	double db;
	try
	{
		db = std::stod(rpz);
	}
	catch (std::exception& e)
	{
		std::cerr << "error: argument is not a string representation of a scalar type (char, int, float or double)" << std::endl;
		return (2);
	}

	/*	char conversions	*/
	if ( db >= 0 && db <= 31 )
		std::cout << "char: non displayable" << std::endl;
	else {
		char	as_char= static_cast<char>(db);
		std::cout << "char: '" << as_char << "'" << std::endl;
	}
	int		as_int = static_cast<int>(db);
	std::cout << "int: " << as_int << std::endl;
	float	as_float = static_cast<float>(db);
	std::cout << "float: " << as_float << "f" << std::endl;
	std::cout << "double: " << db << std::endl;
	
}
