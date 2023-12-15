/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:34:50 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/15 23:20:46 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap toto("Toto");
	ScavTrap tutu;

	std::cout<<"\n";

	std::cout<< toto.getName() << " ep before attack: " << toto.getEp() <<std::endl;
	std::cout<< tutu.getName() << " hp before take damage : " << tutu.getHp() << "\n"<<std::endl;
	toto.attack(tutu.getName());
	tutu.takeDamage(toto.getAtk());
	std::cout<< "\n" << toto.getName() << " ep after attack: " << toto.getEp() <<std::endl;
	std::cout<< "\n" << tutu.getName() << " hp after take damage : " << tutu.getHp() <<std::endl;
	tutu.guardGate();

	std::cout<<"\n\n";
	
	

	return (0);
}