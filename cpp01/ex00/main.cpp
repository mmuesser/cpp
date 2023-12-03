/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:18:18 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 18:59:30 by mmuesser         ###   ########.fr       */
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
	
	// zombie->~Zombie();
	delete zombie;
	return (0);
}