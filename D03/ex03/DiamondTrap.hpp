#ifndef DIAMONDTRAP_H
#	define DIAMONDTRAP_H

#	include "FragTrap.hpp"
#	include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:

		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const& src );
		~DiamondTrap( void );

		DiamondTrap&	operator=( DiamondTrap const& rhs );

		void	whoamI( void ) const;
		using	ScavTrap::attack;

	private:
		DiamondTrap( void );
		std::string _name;
		using FragTrap::_hitPoints;
		using ScavTrap::_energyPoints;
		using FragTrap::_attackDamage;

};

#endif
