#ifndef MUTANTSTACK_H
#	define MUTANTSTACK_H

#	include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack() {}
		MutantStack( MutantStack const& src ) {*this = src;}
		~MutantStack(){}

		MutantStack&	operator=( MutantStack const& rhs ) {(void)rhs; return(*this);}

		typedef typename std::stack<T>::container_type::iterator iterator;
		using std::stack<T>::c;

		iterator begin() { return(c.begin()); }
		iterator end() { return(c.end()); }

	private:

};

#endif
