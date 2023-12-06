/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:46:45 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/06 19:01:04 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name) {
	std::cout<< "Creation de " << getName()<<std::endl;
}

HumanA::~HumanA(void){
	std::cout<< "Destruction de " << getName()<<std::endl;
}

void		HumanA::setWeapon(Weapon &h_weapon) {weapon = h_weapon;}
std::string	HumanA::getWeapon(void) const {return(weapon.getType());}
void		HumanA::setName(std::string h_name) {name = h_name;}
std::string	HumanA::getName(void) const {return(name);}

void	HumanA::attack(void){
	std::cout<< name << " attacks with their " << getWeapon()<<std::endl;
}