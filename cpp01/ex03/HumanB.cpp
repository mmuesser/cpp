/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:52:50 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/04 18:39:59 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*utiliser pointeur parce que ne possede pas toujours une arme donc peut etre NULL*/

HumanB::HumanB(std::string name) /*: weapon(NULL), name(name)*/{
	setName(name);
	std::cout<< "Creation de " << getName()<<std::endl;
}

HumanB::~HumanB(void){
	std::cout<< "Destruction de " << getName()<<std::endl;
}

void			HumanB::setWeapon(Weapon &h_weapon) {weapon = &h_weapon;}
std::string		HumanB::getWeapon(void) const {return(weapon->getType());}
void			HumanB::setName(std::string h_name) {name = h_name;}
std::string		HumanB::getName(void) const {return(name);}

void	HumanB::attack(void){
	std::cout<< name << " attacks with their " << getWeapon()<<std::endl;
}