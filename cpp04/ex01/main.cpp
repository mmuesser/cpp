/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:23:23 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 19:09:42 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	std::cout<<"\n";
	const Animal* puppy = new Dog();
	std::cout<<"\n";
	const Animal* kitty = new Cat();
	std::cout<<"\n";

	std::cout << "puppy: " << puppy->getType() << " " << std::endl;
	std::cout << "kitty: " << kitty->getType() << " " << std::endl;
	std::cout << "meta: " << meta->getType() << " " << std::endl;
	std::cout<<"\n";
	std::cout << "puppy: ";
	puppy->makeSound();
	std::cout << "kitty: ";
	kitty->makeSound();
	std::cout << "meta: ";
	meta->makeSound();
	std::cout<<"\n";
	delete meta;
	std::cout<<"\n";
	delete puppy;
	std::cout<<"\n";
	delete kitty;
	std::cout<< "\n==========================================================\n"<<std::endl;
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	std::cout<<"\n";
	const WrongAnimal* Wrongkitty = new WrongCat();
	std::cout<<"\n";

	std::cout << "Wrongkitty: " << Wrongkitty->getType() << " " << std::endl;
	std::cout << "Wrongmeta: " << Wrongmeta->getType() << " " << std::endl;
	std::cout<<"\n";
	std::cout << "Wrongkitty: ";
	Wrongkitty->makeSound();
	std::cout << "Wrongmeta: ";
	Wrongmeta->makeSound();
	std::cout<<"\n";
	delete Wrongmeta;
	std::cout<<"\n";
	delete Wrongkitty;

	return 0;
}