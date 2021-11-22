#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde( int N, std::string name ) {

	Zombie*	zombies = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		std::ostringstream strStream;
		strStream << i;
		zombies[i].setName(name + '_' + strStream.str());
	}
	return (zombies);
}
