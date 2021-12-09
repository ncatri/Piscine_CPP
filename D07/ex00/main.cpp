#include <iostream>
#include "templates.hpp"
#include "Fixed.hpp"

int main(void) {

	std::cout << "--- test swap() ---" << std::endl;
	Fixed a = Fixed(3.14f);
	Fixed b = Fixed(2);

	std::cout << "a: " << a << " , b: " << b << std::endl;
	swap<>(&a, &b);
	std::cout << "a: " << a << " , b: " << b << std::endl;

	std::string str1 = "salut";
	std::string str2 = "goodbye";

	std::cout << "str1: " << str1 << " , str2: " << str2 << std::endl;
	swap<>(&str1, &str2);
	std::cout << "str1: " << str1 << " , str2: " << str2 << std::endl;

	std::cout << "--- test min() ---" << std::endl;
	std::cout << "min(a, b): " << min<>(a, b) << std::endl;
	std::cout << "min(b, a): " << min<>(b, a) << std::endl;
	std::cout << "min(str1, str2): " << min<>(str1, str2) << std::endl;

	std::cout << "--- test max() ---" << std::endl;
	std::cout << "max(a, b): " << max<>(a, b) << std::endl;
	std::cout << "max(b, a): " << max<>(b, a) << std::endl;
	std::cout << "max(str1, str2): " << max<>(str1, str2) << std::endl;
}

template <typename T>
void	swap(T *a, T *b) {
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

template <typename T>
T	min(T& a, T& b) {

	return ( (a < b) ? a : b );
}

template <typename T>
T	max(T& a, T& b) {

	return ( (a > b) ? a : b );
}
