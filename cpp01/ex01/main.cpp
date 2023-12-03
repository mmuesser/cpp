/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:18:18 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 19:21:02 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	horde = zombieHorde(10, "Toto");
	for(int	i = 0; i < 10; i++){
		horde[i].announce();
	}
	delete [] horde;
	std::cout<< "----------------------"<<std::endl;
	horde = zombieHorde(3, "Toto");
	for(int	i = 0; i < 3; i++){
		horde[i].announce();
	}
	delete [] horde;
	std::cout<< "----------------------"<<std::endl;
	horde = zombieHorde(6, "Toto");
	for(int	i = 0; i < 6; i++){
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}