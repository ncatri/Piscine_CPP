#ifndef SCAVTRAP_H
#	define SCAVTRAP_H

#	include <iostream>
#	include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const& src );
		~ScavTrap( void );

		ScavTrap&	operator=( ScavTrap const& rhs );

	private:

};

#endif
