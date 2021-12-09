#include <iostream>
#include "serialization.hpp"

int main(void) {

	std::cout << "--- data on the stack ---" << std::endl;
	{
		struct Data data;
		fillData(&data, "coucou", 42);
		std::cout << "address of data: " << &data << std::endl;
		displayData(data);
		uintptr_t pointer = serialize(&data);
		std::cout << "address of pointer: " << &pointer << std::endl;
		struct Data *new_data = deserialize(pointer);
		std::cout << "address of new_data: " << new_data << std::endl;
		std::cout << " * new data: " << std::endl;
		displayData(*new_data);
	}

	std::cout << std::endl << "--- data on the heap ---" << std::endl;
	struct Data *data = new Data;
	std::cout << "address of data: " << data << std::endl;
	fillData(data, "hey mate!", -345);
	displayData(*data);
	uintptr_t pointer = serialize(data);
	std::cout << "address of pointer: " << &pointer << std::endl;
	struct Data *new_data = deserialize(pointer);
	std::cout << "address of new_data: " << new_data << std::endl;
	std::cout << " * new data" << std::endl;
	displayData(*new_data);

	delete data;

}

uintptr_t	serialize( Data* ptr ) {
	uintptr_t generic_pointer_type;

	generic_pointer_type = reinterpret_cast<uintptr_t>(ptr);
	return (generic_pointer_type);
}

Data		*deserialize( uintptr_t raw) {
	Data	*data_pointer;

	data_pointer = reinterpret_cast<Data *>(raw);
	return (data_pointer);
}

bool		fillData( struct Data *dataPtr, std::string message, int number ) {
	bool ret = false;

	if (dataPtr) {
		dataPtr->message = message;
		dataPtr->number = number;
		ret = true;
	}
	else
		std::cerr << "error: invalid pointer to Data" << std::endl;
	return (ret);
}

void	displayData( Data const& data ) {
	std::cout << "message: " << data.message << std::endl;
	std::cout << "number: " << data.number << std::endl;
}
