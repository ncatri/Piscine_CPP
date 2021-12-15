#include <iostream>
#include "Mutantstack.hpp"

int main(void) {
	std::cout << "--- test constructor by copy ---" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		MutantStack<int> mstack2(mstack);
		std::cout << "construction by copy, size of mstack2: |" << mstack2.size() << "|" << std::endl;
		mstack.push(42);
		mstack2 = mstack;
		std::cout << "after assignation, size of mstack2: |" << mstack2.size() << "|" << std::endl;
//		std::cout << mstack2.pop() << " " << mstack2.pop() << std::endl;
	}
	
	std::cout << "--- test subject ---" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << "[" <<  *it << "]"<< std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "--- test iterating mutantstack filled with random numbers ---" << std::endl;
	std::srand(unsigned(std::time(NULL)));
	for (int i = 0; i < 10; ++i)
		mstack.push(std::rand() % 100);
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}
