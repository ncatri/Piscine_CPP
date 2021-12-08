#ifndef SERIALIZATION_H
# define SERIALIZATION_H

struct Data {
	std::string message;
	int			number;
};

bool		fillData( struct Data *dataPtr, std::string message, int number );
void		displayData(Data const& data );

uintptr_t	serialize( Data* ptr );
Data		*deserialize( uintptr_t raw);

#endif
