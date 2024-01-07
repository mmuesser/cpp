/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:34:50 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 14:52:33 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap toto("Toto");
	ClapTrap tata;
	ClapTrap titi("Titi");
	ClapTrap toto_copy(toto);

	titi = toto;
	std::cout<<"\n";
	std::cout<< "titi name : " << titi.getName() <<std::endl;
	std::cout<< "\ntoto ep before attack : " << toto.getEp() <<std::endl;
	std::cout<< "tata hp before take damage : " << tata.getHp() << "\n"<<std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(5);
	std::cout<< "\ntoto ep after attack : " << toto.getEp() <<std::endl;
	std::cout<< "tata hp after take damage : " << tata.getHp() <<std::endl;

	std::cout<<"\n\n";
	
	std::cout<< "tata ep before repair : " << tata.getEp() << "\n"<<std::endl;
	tata.beRepaired(3);
	std::cout<< "\ntata ep after repair : " << tata.getEp() <<std::endl;
	std::cout<< "tata hp after repair : " << tata.getHp() << "\n"<<std::endl;

	return (0);
}