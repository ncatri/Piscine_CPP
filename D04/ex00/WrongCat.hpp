#ifndef WRONGCAT_H
#	define WRONGCAT_H

class WrongCat : public WrongAnimal {

	public:
		WrongCat( void );
		WrongCat( WrongCat const& src );
		~WrongCat( );
		WrongCat&	operator=( WrongCat const& rhs );

		void makeSound( void ) const;

	private:

};

#endif
