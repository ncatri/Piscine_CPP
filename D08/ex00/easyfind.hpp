#ifndef EASYFIND_H
#	define EASYFIND_H

#include <stdexcept>
#include <algorithm>

template<typename T>
void	easyfind(T& container, int target) {
	if (std::find(container.begin(), container.end(), target) == container.end())
		throw std::runtime_error("target not found");
}

#endif
