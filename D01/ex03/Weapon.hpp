#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

	public:
		Weapon( std::string type );		
		Weapon( void );
		~Weapon( void );

		const std::string&	getType( void );
		void				setType( const std::string type);

	private:
		std::string _type;
};

#endif
