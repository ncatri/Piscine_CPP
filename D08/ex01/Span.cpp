#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <ctime>

Span::Span( unsigned int N ) : _capacity(N), _num_elts(0) {
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
	this->_num_elts = rhs.getNumElts();
	return (*this);
}

std::vector<int>	Span::getVector() const { return (this->_vector); }
unsigned int		Span::getCapacity() const { return (this->_capacity); }
unsigned int		Span::getNumElts() const { return (this->_num_elts); }

void	Span::addNumber( int number ) {
	if ( this->_capacity == 0 )
		throw std::runtime_error("no more capacity");
	std::vector<int>::const_iterator end = this->_vector.end();
	this->_vector.erase(end - 1);
	this->_vector.insert(end - this->_capacity, number);
	this->_capacity--;
	this->_num_elts++;
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
	int shortest = *(v.end() - 1);
	for (std::vector<int>::const_iterator it = v.begin(); (it + 1) != v.end(); ++it) {
		if (*(it + 1) - *it < shortest) {
			shortest = *(it + 1) - *it;
		}
	}
	return (shortest);
}

void	Span::fillRandom() {

	std::srand(unsigned(std::time(NULL)));
	std::generate(this->_vector.begin() + this->_num_elts, this->_vector.end(), std::rand);
	this->_capacity = 0;
}

std::ostream&	operator<<( std::ostream& o, Span& rhs ) {
	std::vector<int> v = rhs.getVector();
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
		o << *it << " ";
	}
	o << std::endl;
	return (o);
}
