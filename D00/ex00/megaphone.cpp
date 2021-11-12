#include <iostream>		//std::cout
#include <string>		//std::string
#include <locale>		//std::locale, std::toupper

void	print_toupper(std::string s)
{
	for (std::string::size_type i = 0; i < s.size(); i++) {
		std::cout << std::toupper(s[i], std::locale());
	}
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	int			i = 1;
	std::string	word;
	for (int i = 1; i < argc; ++i)
	{
		word = argv[i];
		print_toupper(word);
		if (i != argc)
			std::cout << ' ';
	}
	std::cout << '\n';
}
