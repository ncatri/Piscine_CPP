#include <iostream>
#include <fstream>
#include <sstream>

std::string	my_replace(std::string word, size_t pos, std::string search, std::string replace);

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "Usage: ./replace <filename> <str_to_search> <str_to_replace>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");
	if (!ifs.good()) {
		std::cerr << "Error: invalid file" << std::endl;
		return (2);
	} else if (!ofs.good()) {
		std::cerr << "Error: can't create output file" << std::endl;
		return (3);
	}
	std::string to_replace = argv[3];
	std::string to_search = argv[2];
	for (std::string line; std::getline(ifs, line); ) {
		std::istringstream iss(line);
		do {
			std::string word;
			iss >> word;

			size_t pos = word.find(argv[2]);
			if (pos == std::string::npos)
				ofs << word;
			else { 
				word = my_replace(word, pos, to_search, to_replace);
				ofs << word;
			}
			if (iss.peek() != -1)
				ofs << ' ';
		} while (iss);
		ofs << '\n';
	}
	ifs.close();	
	ofs.close();
}

std::string	my_replace(std::string word, size_t pos, std::string search, std::string replace) {

	std::string prefix = word.substr(0, pos);
	std::string suffix = word.substr(pos + search.size());
	return (prefix + replace + suffix);
}
