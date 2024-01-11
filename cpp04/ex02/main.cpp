/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:23:23 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/11 14:44:27 by mmuesser         ###   ########.fr       */
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
	// {
	// 	Animal	test;
	// }
	return 0;
}