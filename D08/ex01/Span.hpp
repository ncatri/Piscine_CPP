#ifndef SPAN_H
#	define SPAN_H

class Span : public Array<int> {

	public:
		Span();
		Span( unsigned int N );
		~Span();

		Span&	operator=( Span const& rhs);

	private:

		unsigned int	_capacity;
};

#endif
