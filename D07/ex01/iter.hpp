#ifndef ITER_HPP
#	define ITER_HPP
#	include <cstddef> // size_t

template<typename T>
void	iter(T	*array, size_t array_size, void (*function)( T const& )) {
	for (size_t i = 0; i < array_size; i++)
		(*function)(array[i]);
}

#endif
