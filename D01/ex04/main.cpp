#include <iostream>
#include <fstream>
#include <sstream>

std::string	my_replace(std::string word, std::string search, std::string replace);

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
		line = my_replace(line, to_search, to_replace);
		ofs << line << std::endl;
	}
	ifs.close();	
	ofs.close();
}

std::string	my_replace(std::string line, std::string search, std::string replace) {

	size_t pos = line.find(search);
	while (pos != std::string::npos) {
		std::string prefix = line.substr(0, pos);
		std::string suffix = line.substr(pos + search.size());
		line = prefix + replace + suffix;
		pos = line.find(search);
	}
	return (line);
}
