#ifndef CAT_H
#	define CAT_H

#	include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat( void );
		Cat( Cat const& src );
		~Cat( );
		Cat&	operator=( Cat const& rhs );

		void makeSound( void ) const;
		void	addIdea( std::string idea );
		void	showIdeas( void ) const;

	private:

		Brain	*_brain;

};

#endif
