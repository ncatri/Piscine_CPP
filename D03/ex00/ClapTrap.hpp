#ifndef CLAPTRAP_H
#	define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	public:
		ClapTrap( std::string const name );
		ClapTrap( ClapTrap const& src );
		~ClapTrap( void );

		ClapTrap&	operator=( ClapTrap const& rhs );

		std::string	getName( void ) const;
		int			getHitPoints( void ) const;

		void	attack( std::string const& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

};

#endif
