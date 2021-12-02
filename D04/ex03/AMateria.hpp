#ifndef AMATERIA_H
#	define AMATERIA_H

#	include <string>
#	include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public:

		AMateria( std::string const& type );
		AMateria( AMateria const& src );
		virtual	~AMateria( void );

		AMateria&	operator=( AMateria const& rhs );

		std::string const& getType( void ) const;

		virtual	AMateria* 	clone( void ) const = 0;
		virtual void 		use(ICharacter& target);

	protected:

		std::string 	_type;
		AMateria( void );

	private:

};

#endif
