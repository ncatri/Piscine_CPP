#include "CureMateria.hpp"
#include "IceMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int main(void) {

	std::cout << "--- subject tests ---" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new IceMateria());
		src->learnMateria(new CureMateria());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "--- other tests ---" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new IceMateria());
		src->learnMateria(new CureMateria());

		ICharacter* perso1 = new Character("test1");
		ICharacter* perso2 = new Character("test2");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		perso1->equip(tmp);
		perso1->use(0, *perso2);
		*perso2 = *perso1;
		tmp = src->createMateria("cure");
		perso2->equip(tmp);
		perso1->use(0, *perso2);
		perso2->use(0, *perso1);

		perso1->use(2, *perso2);
		perso1->use(5, *perso2);
		
		delete perso1;
		delete perso2;
		delete src;
	}	

	return 0;
}
