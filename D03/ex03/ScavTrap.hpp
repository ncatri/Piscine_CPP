#ifndef SCAVTRAP_H
#	define SCAVTRAP_H

#	include <iostream>
#	include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:

		ScavTrap( std::string name );
		ScavTrap( ScavTrap const& src );
		~ScavTrap( void );

		ScavTrap&	operator=( ScavTrap const& rhs );

		void	guardGate( void );

	private:

		ScavTrap( void );

};

#endif
