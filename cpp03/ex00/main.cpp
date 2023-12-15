/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:34:50 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/15 19:22:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap toto("Toto");
	ClapTrap tata("Tata");
	ClapTrap titi("Titi");
	ClapTrap toto_copy(toto);

	titi = toto;
	std::cout<<"\n";

	std::cout<< "toto ep before attack: " << toto.getEp() <<std::endl;
	std::cout<< "tata hp before take damage : " << tata.getHp() << "\n"<<std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(5);
	std::cout<< "\ntoto ep after attack: " << toto.getEp() <<std::endl;
	std::cout<< "tata hp after take damage : " << tata.getHp() <<std::endl;

	std::cout<<"\n\n";
	
	std::cout<< "tata ep before repair : " << tata.getEp() << "\n"<<std::endl;
	tata.beRepaired(3);
	std::cout<< "\ntata ep after repair : " << tata.getEp() <<std::endl;
	std::cout<< "tata hp after repair of 3: " << tata.getHp() << "\n"<<std::endl;

	return (0);
}