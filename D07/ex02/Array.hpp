#ifndef ARRAY_HPP
#	define ARRAY_HPP

template <typename T>
class Array {

	public:

		Array( void ) {
			this->_array = NULL;
		}

		Array( unsigned int n ) {
			this->_array = new	T[n];
			this->_size = _size;
		}

		Array( Array const& rhs ) {
			*this = rhs;
		}
			
		~Array( void ) {
			delete [] this->_array;
		}

		void	operator=( Array const& rhs ) {

			unsigned int size = rhs.size();
			delete [] this->_array;
			this->_array = new	T[size];
			for (unsigned int i = 0; i < size; ++i) {
				this->_array[i] = rhs[i];
			}
			this->_size = size;
		}
		T&			operator[] ( unsigned int index ) { return (this->_array[index]); }
		const T&	operator[]( unsigned int index ) const { return (this->_array[index]; }	

		unsigned int	size( void ) const { return(this->_size); }

	private:

		T				*_array;
		unsigned int	_size;

};

#endif
