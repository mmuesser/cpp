/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:18:18 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/06 18:49:56 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

	zombie = newZombie("Toto");
	std::cout<<"\n";

	std::cout<< "randomChump :"<<std::endl;
	randomChump("Tata");

	std::cout<<"\n";
	
	std::cout<< "Announce :"<<std::endl;
	zombie->announce();
	
	delete zombie;
	return (0);
}