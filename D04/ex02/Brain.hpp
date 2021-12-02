#ifndef BRAIN_H
#	define BRAIN_H

#	include <string>
#	include <iostream>

#	define NUM_IDEAS (100)

class Brain {

	public:

		Brain( void );
		Brain( Brain const& src );
		~Brain( void );

		Brain&	operator=( Brain const& rhs );

		void	addIdea( std::string idea );
		void	showIdeas( void ) const;

	private:

		std::string	_ideas[NUM_IDEAS];

};

#endif
