#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) :
	Form("ShrubberyCreation", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& src ) {

	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( ) {
	return;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const& rhs ) {

	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const& executor ) const {
	
	if (this->execRequirementsOK(executor)) { 
		std::ofstream file(this->getTarget().data());
		file << "           _\\/_        \n";
		file << "            /\\	     \n";
		file << "            /\\		 \n";
		file << "           /  \\		 \n";
		file << "           /~~\\o	     \n";
		file << "          /o   \\	     \n";
		file << "         /~~*~~~\\	     \n";
		file << "        o/  o   \\	     \n";
		file << "        /~~~~~~~~\\~`   \n";
		file << "       /__*_______\\    \n";
		file << "            ||		     \n";
		file << "          \\====/		 \n";
		file << "           \\__/		 \n";
		file.close();
	}
}
