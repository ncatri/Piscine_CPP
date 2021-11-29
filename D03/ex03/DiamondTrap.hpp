#ifndef DIAMONDTRAP_H
#	define DIAMONDTRAP_H

#	include "FragTrap.hpp"
#	include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:
		DiamondTrap( DiamondTrap const& src );
		~DiamondTrap( void );

		DiamondTrap&	operator=( DiamondTrap const& rhs );

		void	whoamI( void );

	private:
		DiamondTrap( void );
		std::string _name;

};

#endif
