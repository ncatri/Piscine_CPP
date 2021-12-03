#ifndef DOG_H
#	define DOG_H

#	include "Brain.hpp"

class Dog : public Animal {

	public:
		Dog( void );
		Dog( Dog const& src );
		virtual ~Dog( void );
		Dog&	operator=( Dog const& rhs );

		void	makeSound( void ) const;
		void	addIdea( std::string idea );
		void	showIdeas( void ) const;

	private:

		Brain	*_brain;

};

#endif
