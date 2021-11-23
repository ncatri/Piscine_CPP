#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

	public:
		Weapon( std::string type );		
		Weapon( void );
		~Weapon( void );

		std::string const&	getType( void ) const;
		void				setType( std::string const type);

	private:
		std::string _type;
};

#endif
