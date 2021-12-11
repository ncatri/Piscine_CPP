#ifndef TEMPLATE_HPP
#	define TEMPLATE_HPP
#	include <iostream>

template<typename T>
void	templated_display( T& elt ) {
	std::cout << "[" << elt << "]";
}

#endif
