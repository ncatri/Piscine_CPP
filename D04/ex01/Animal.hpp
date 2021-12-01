#ifndef ANIMAL_H
#	define ANIMAL_H

#	include <iostream>

class Animal {

	public:

		Animal( void );
		Animal( std::string type ); //needed to initialize derived class with correct type
		Animal( Animal const& src );
		virtual ~Animal( void );
		virtual Animal&	operator=( Animal const& rhs );

		std::string		getType( void ) const;
		virtual	void	makeSound( void ) const;
		virtual void	addIdea( std::string idea );
		virtual void	showIdeas( void ) const;

	protected:

		std::string	_type;

};

#endif
