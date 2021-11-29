#ifndef SCAVTRAP_H
#	define SCAVTRAP_H

#	include <iostream>
#	include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap( std::string name );
		FragTrap( FragTrap const& src );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap const& rhs );

		void	highFivesGuys( void );

	private:

		FragTrap( void );

};

#endif
