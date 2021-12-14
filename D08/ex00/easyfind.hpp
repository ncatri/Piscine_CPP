#ifndef EASYFIND_H
#	define EASYFIND_H

#include <stdexcept>

template<typename T>
int	easyfind(T& container, int target) {
	typename T::const_iterator iterator;
	for (iterator = container.begin(); iterator != container.end(); ++iterator) {
		if (*iterator == target)
			return (*iterator);
	}
	throw std::runtime_error("target not found");
}

#endif
