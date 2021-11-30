#ifndef FRAGTRAP_H
#	define FRAGTRAP_H

#	include <iostream>
#	include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const& src );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap const& rhs );

		void	highFivesGuys( void );

	private:


};

#endif
