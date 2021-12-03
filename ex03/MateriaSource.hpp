#ifndef MATERIASOURCE_H
#	define MATERIASOURCE_H

#	include "IMateriaSource.hpp"
#	include <string>

#	define	BOOK_SIZE (4)

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const& src );
		~MateriaSource( void );

		MateriaSource&	operator=( MateriaSource const& rhs );

		void		learnMateria( AMateria* materia );
		AMateria	*createMateria( std::string const& type );

	private:

		AMateria	*_spellBook[BOOK_SIZE];

};

#endif
