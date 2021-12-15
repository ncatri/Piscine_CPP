#ifndef MUTANTSTACK_H
#	define MUTANTSTACK_H

#	include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack() {}
		MutantStack( MutantStack const& src ) { *this = src; }
		~MutantStack(){}

		MutantStack&	operator=( MutantStack const& rhs ) {
			this->c = rhs.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return (this->c.begin()); }
		iterator end() { return(this->c.end()); }

	private:

};

#endif
