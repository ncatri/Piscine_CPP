#ifndef WRONGANIMAL_H
#	define WRONGANIMAL_H

#	include <iostream>

class WrongAnimal {

	public:

		WrongAnimal( void );
		WrongAnimal( std::string type ); //needed to initialize derived class with correct type
		WrongAnimal( WrongAnimal const& src );
		~WrongAnimal( void );
		WrongAnimal&	operator=( WrongAnimal const& rhs );

		std::string		getType( void ) const;
		void			makeSound( void ) const;

	protected:

		std::string	_type;

};

#endif
