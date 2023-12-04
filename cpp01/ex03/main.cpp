/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:01:28 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/04 18:25:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout<< "-------------------------------------"<<std::endl;
	{
		Weapon club = Weapon("lucie");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("pas lucie");
		jim.attack();
	}
	return (0);
}