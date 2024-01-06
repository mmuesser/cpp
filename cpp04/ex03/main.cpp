/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:31:15 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 16:36:48 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int	main(void)
// {
// 	IMateriaSource* src = new MateriaSource();

// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return (0);
// }

int main(void)
{
	AMateria * tmp;
	AMateria *	garbage;

	std::cout << "Materia source\n";
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());

	std::cout << std::endl;
	MateriaSource*	src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	std::cout << std::endl;
	MateriaSource*	src3 = src2;

	std::cout << "\nCharacter\n";
	ICharacter* me = new Character("me");
	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	garbage = src->createMateria("cure");
	me->equip(garbage);

	tmp = src3->createMateria("ice");
	me->equip(tmp);
	tmp = src3->createMateria("cure");

	
	std::cout << "\nusing staff.\n";	
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->use(2, *me);
	me->use(5, *bob);
	me->use(-42, *bob);

	std::cout << "\nFilling Bob's backpack\n";
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);

	std::cout << std::endl;
	for (int i = -2; i < 6; i++)
		bob->use(i, *me);

	std::cout << std::endl;

	std::cout << "\nDeleting...\n";
	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	std::cout << std::endl;
	delete src2;
	std::cout << std::endl;
	delete garbage;
	
	return (0);
}