/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:23:23 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/08 15:54:58 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal *pets[10];

	for(int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			pets[i] = new Cat;
			pets[i]->learning("I love fish", i);
		}
		else
		{
			pets[i] = new Dog;
			pets[i]->learning("I love bone", i);
		}
	}
	std::cout<<"\n";
	for(int i = 0; i < 10; i++)
	{
		pets[i]->makeSound();
		pets[i]->thinking(i);
	}
	std::cout<<"\n";
	for(int i = 0; i < 10; i++)
	{
		delete pets[i];
	}

	{
		Dog dog1;
		// Dog dog2;
		Dog dog2 = dog1;
		std::cout << dog1.getBrain() << std::endl;
		std::cout << dog2.getBrain() << std::endl;
	}

	return 0;
}