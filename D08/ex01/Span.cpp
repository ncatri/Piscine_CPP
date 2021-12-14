#include "Span.hpp"

Span::Span() : _size(0), _array(NULL), _cursor(0) {}

Span::Span( unsigned int N ) : _size(N), _cursor(0) {
	this->_array = new int[n];
	return;
}

Span::Span( Span const& src ) {

	*this = src;
}

Span::~Span( ) {
	return;
}

Span&	Span::operator=( Span const& rhs ) {

	unsigned int	size = rhs.getSize();
	if (this->_array)
		delete [] this->_array;
	for (unsigned int i = 0; i < size; ++i) {
		this->_array[i] = rhs[i];
	}
	this->_size = size;
	this->_cursor 


	

}

unsigned int	Span::getSize() const { return (this->_size); }

T&	operator[] ( unsigned int index ) {

	if (index < 0 || index >= this->_size)
		throw std::runtime_error("out of range"); 
	return (this->_array[index]);
}

const T&	operator[]( unsigned int index ) const {
	if (index < 0 || index >= this->_size)
		throw std::runtime_error("out of range"); 
	return (this->_array[index]);
}
