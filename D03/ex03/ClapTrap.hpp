#ifndef CLAPTRAP_H
#	define CLAPTRAP_H

#	include <iostream>

class ClapTrap {

	public:

		ClapTrap( void );
		ClapTrap( std::string const name );
		ClapTrap( ClapTrap const& src );
		~ClapTrap( void );

		ClapTrap&	operator=( ClapTrap const& rhs );

		std::string	getName( void ) const;
		void		setName( std::string name );
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;

		void	attack( std::string const& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

};

std::ostream&	operator<<(std::ostream& o, ClapTrap const& rhs);

#endif
