#ifndef CHARACTER_H
#	define CHARACTER_H

#	include "ICharacter.hpp"
#	include <string>

#	define	INVENTORY_SIZE (4)

class Character : public ICharacter {

	public:

		Character( std::string name );
		Character( Character const& src );
		~Character( void );

		Character&	operator=( Character const& rhs );

		std::string const& getName( void ) const;
		void				equip( AMateria *m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );

	private:

		std::string _name;
		AMateria	*_inventory[INVENTORY_SIZE];
		Character( void );

};

#endif
