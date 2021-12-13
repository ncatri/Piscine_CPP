#ifndef ARRAY_HPP
#	define ARRAY_HPP

#	include <cstdlib> // definition of NULL
#	include <stdexcept>

template <typename T>
class Array {

	public:

		Array( void ) {
			this->_array = NULL;
			this->_size = 0;
		}

		Array( unsigned int n ) {
			this->_array = new	T[n];
			for (unsigned int i = 0; i < n; ++i) {
				this->_array[i] = T();
			}
			this->_size = n;
		}

		Array( Array const& rhs ) : _array(NULL), _size(0) {
			*this = rhs;
		}
			
		~Array( void ) {
			if (this->_array)
				delete [] this->_array;
		}

		Array&	operator=( Array const& rhs ) {

			if (this != &rhs) {
				unsigned int size = rhs.size();
				if (this->_array)
					delete [] this->_array;
				this->_array = new	T[size];
				for (unsigned int i = 0; i < size; ++i) {
					this->_array[i] = rhs[i];
				}
				this->_size = size;
			}
			return (*this);
		}
		T&			operator[] ( unsigned int index ) {
			if (index < 0 || index >= this->_size)
				throw std::runtime_error("out of range"); 
			return (this->_array[index]);
		}
		const T&	operator[]( unsigned int index ) const {
			if (index < 0 || index >= this->_size)
				throw std::runtime_error("out of range"); 
			return (this->_array[index]);
		}

		unsigned int	size( void ) const { return(this->_size); }

	private:

		T				*_array;
		unsigned int	_size;

};

#endif
