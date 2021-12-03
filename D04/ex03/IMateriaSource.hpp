#ifndef IMATERIASOURCE_H
#	define IMATERIASOURCE_H

#	include <string>
#	include "AMateria.hpp"

class IMateriaSource {

	public:
		virtual	~IMateriaSource( void ) {}
		virtual	void		learnMateria( AMateria* ) = 0;
		virtual	AMateria	*createMateria( std::string const& type ) = 0;

};

#endif
