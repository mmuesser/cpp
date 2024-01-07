/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:34:50 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 14:59:49 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap toto("Toto");
	ScavTrap tata("Tata");
	ScavTrap titi("Titi");
	ScavTrap toto_copy(toto);

	titi = toto;
	std::cout<<"\n";
	std::cout<< "titi name : " << titi.getName() <<std::endl;
	std::cout<< "\n" << toto.getName() << " ep before attack : " << toto.getEp() <<std::endl;
	std::cout<< tata.getName() << " hp before take damage : " << tata.getHp() << "\n"<<std::endl;

	toto.attack(tata.getName());
	tata.takeDamage(toto.getAtk());
	
	std::cout<< "\n" << toto.getName() << " ep after attack: " << toto.getEp() <<std::endl;
	std::cout<< tata.getName() << " hp after take damage : " << tata.getHp() <<std::endl;

	std::cout<<"\n\n";
	
	std::cout<< tata.getName() << " ep before repair : " << tata.getEp() << "\n"<<std::endl;
	tata.beRepaired(3);
	std::cout<< "\n" << tata.getName() << " ep after repair : " << tata.getEp() <<std::endl;
	std::cout<< tata.getName() << " hp after repair : " << tata.getHp() << "\n"<<std::endl;
	toto.guardGate();
	std::cout<<"\n";
	for (int i = 0; i < 50; i++){
		tata.attack(titi.getName());
		titi.takeDamage(tata.getAtk());
		std::cout<< "titi hp : " << titi.getHp()<<std::endl;
	}
	std::cout<< "tata ep : " << tata.getEp()<<std::endl;
	std::cout<<"\n";
	
	return (0);
}