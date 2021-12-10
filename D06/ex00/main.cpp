#include <iostream>
#include <cctype>
#include <string>
#include <limits>

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./run <argument>" << std::endl;
		return (1);
	}

	std::cout.precision(15);
	std::string	rpz = argv[1];
	double db;
	char	*pEnd = NULL;
	if (rpz.size() > 1 || std::isdigit(argv[1][0])) 
	{
		db = strtod(argv[1], &pEnd);
		if (*pEnd && !(pEnd[0] == 'f' && pEnd[1] == '\0'))
		{
			std::cerr << "error: argument is not a valid representation" << std::endl;
			return (1);
		}
	}
	else
		db = argv[1][0]; 

	/*	char conversions	*/

	if ( db <= 31 || db == 127 )
		std::cout << "char: non displayable" << std::endl;
	else if (db < 0 || db > 127 || (db != db))
		std::cout << "char: impossible" << std::endl;
	else {
		char	as_char= static_cast<char>(db);
		std::cout << "char: '" << as_char << "'" << std::endl;
	}

	/* int conversions */

	int		as_int = static_cast<int>(db);
	if (db < std::numeric_limits<int>::min() || db > std::numeric_limits<int>::max() || (db != db))
		std::cout << "int: impossible" << std::endl;
	else {
		std::cout << "int: " << as_int << std::endl;
	}

	/* float and double formatting */

	double decimal_part = db - as_int;
//	std::cout << "decimal part: " << decimal_part << std::endl;

	float	as_float = static_cast<float>(db);
	if (decimal_part == 0.0f ) {
		std::cout << "float: " << as_float << ".0" << "f" << std::endl;
		std::cout << "double: " << db << ".0" << std::endl;
	}
	else {
		std::cout << "float: " << as_float << "f" << std::endl;
		std::cout << "double: " << db << std::endl;
	}
}
