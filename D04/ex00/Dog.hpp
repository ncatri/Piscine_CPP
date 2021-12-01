#ifndef DOG_H
#	define DOG_H

class Dog : public Animal {

	public:
		Dog( void );
		Dog( Dog const& src );
		~Dog( void );
		Dog&	operator=( Dog const& rhs );

		void makeSound( void ) const;

	private:

};

#endif
