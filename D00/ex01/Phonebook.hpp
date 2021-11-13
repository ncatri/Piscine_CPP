#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

private:

	Contact	_contacts[8];

};

#endif
