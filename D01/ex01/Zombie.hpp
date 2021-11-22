#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

public:

	Zombie( std::string name);
	Zombie( void );
	~Zombie( void );
	void		setName( std::string name );
	std::string	getName( void );

	void		announce( void );

private:

	std::string _name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif
