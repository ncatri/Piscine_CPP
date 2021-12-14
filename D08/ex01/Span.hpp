#ifndef SPAN_H
#	define SPAN_H

#include <vector>
#include <iostream>

class Span { 

	public:
		Span( unsigned int N );
		Span( Span const& src );
		~Span();

		Span&	operator=( Span const& rhs);

		std::vector<int>	getVector() const;
		unsigned int		getCapacity() const;

		void	addNumber( int number );
		void	fillRandom();
		
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

	private:

		Span();
		unsigned int		_capacity;
		std::vector<int>	_vector;
};

std::ostream&	operator<<( std::ostream& o, Span& rhs );

#endif
