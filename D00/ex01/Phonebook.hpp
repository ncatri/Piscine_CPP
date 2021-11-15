#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

	int		getIndex(void) const;
	
	int 	add_contact(void);
	void	show_content(void) const;
	void	launch(void);

private:

	Contact	_contacts[8];
	int		_index;
	void	_increment_index(void);
	void	_search(void) const;

};

#endif
