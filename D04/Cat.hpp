#ifndef CAT_H
#	define CAT_H

class Cat : public Animal {

	public:
		Cat( void );
		Cat( Cat const& src );
		~Cat( );
		Cat&	operator=( Cat const& rhs );

		void makeSound( void ) const;

	private:

};

#endif
