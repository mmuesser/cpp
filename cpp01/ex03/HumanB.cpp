/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:52:50 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/07 18:48:55 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	setName(name);
	std::cout<< "Creation de " << getName()<<std::endl;
}

HumanB::~HumanB(void){
	std::cout<< "Destruction de " << getName()<<std::endl;
}

void			HumanB::setWeapon(Weapon &h_weapon) {weapon = &h_weapon;}
Weapon			*HumanB::getWeapon(void) const {return(weapon);}
void			HumanB::setName(std::string h_name) {name = h_name;}
std::string		HumanB::getName(void) const {return(name);}

void	HumanB::attack(void){
	Weapon *weapon = getWeapon();

	if (!weapon)
		return ;
	std::cout<< name << " attacks with their " << weapon->getType()<<std::endl;
}