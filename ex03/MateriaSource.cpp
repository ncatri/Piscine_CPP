#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource( ) {

	for (int i = 0; i < BOOK_SIZE; ++i)
		this->_spellBook[i] = NULL;
	return;
}

MateriaSource::MateriaSource( MateriaSource const& src ) {

	*this = src;
}

MateriaSource::~MateriaSource( ) {

	for (int i = 0; i < BOOK_SIZE; ++i) {
		if (this->_spellBook[i])
			delete _spellBook[i];
	}
	return;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const& rhs ) {

	for (int i = 0; i < BOOK_SIZE; ++i)
		this->_spellBook[i] = rhs._spellBook[i];
	return (*this);
}

void	MateriaSource::learnMateria( AMateria* materia ) {

	for (int i = 0; i < BOOK_SIZE; ++i) {
		if (this->_spellBook[i] == NULL) {
			this->_spellBook[i] = materia;
			std::cout << "materia of type " 
					<< materia->getType()
					<< " successfully added to spellbook" << std::endl;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const& type ) {

	for (int i = 0; i < BOOK_SIZE; ++i) {
		AMateria	*tmp = this->_spellBook[i];
		if (tmp && tmp->getType().compare(type) == 0)
			return (tmp);
	}
	return (NULL);
}
