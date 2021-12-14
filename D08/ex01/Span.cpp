#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <ctime>

//Span::Span() : _size(0), _array(NULL), _cursor(0) {}

Span::Span( unsigned int N ) : _capacity(N) {
	this->_vector = std::vector<int>(N);
}

Span::Span( Span const& src ) {

	*this = src;
}

Span::~Span( ) {
	return;
}

Span&	Span::operator=( Span const& rhs ) {

	this->_vector = rhs.getVector();
	this->_capacity = rhs.getCapacity();
	return (*this);
}

std::vector<int>	Span::getVector() const { return (this->_vector); }

unsigned int		Span::getCapacity() const { return (this->_capacity); }

void	Span::addNumber( int number ) {
	if ( this->_capacity == 0 )
		throw std::runtime_error("no more capacity");
	this->_vector.push_back(number);
	this->_capacity--;
}

unsigned int	Span::longestSpan() const {
	if (this->_vector.size() < 2)
		throw std::runtime_error("not enough elements to span");
	
	std::vector<int>::const_iterator max;
	std::vector<int>::const_iterator min;
	max = std::max_element(this->_vector.begin(), this->_vector.end());
	min = std::min_element(this->_vector.begin(), this->_vector.end());
	return (*max - *min);
}

unsigned int	Span::shortestSpan() const {
	if (this->_vector.size() < 2)
		throw std::runtime_error("not enough elements to span");

	std::vector<int> v = this->_vector;
	std::sort(v.begin(), v.end());
	int shortest = *v.end();
	for (std::vector<int>::const_iterator it = v.begin(); (it + 1) != v.end(); ++it) {
		if (*(it + 1) - *it < shortest)
			shortest = *(it + 1) - *it;
	}
	return (shortest);
}

void	Span::fillRandom() {

	std::srand(unsigned(std::time(NULL)));
	std::generate(this->_vector.begin(), this->_vector.end(), std::rand);
}

std::ostream&	operator<<( std::ostream& o, Span& rhs ) {
	std::vector<int> v = rhs.getVector();
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
		o << *it << " ";
	}
	o << std::endl;
	return (o);
}
