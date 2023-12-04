/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:07:36 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/04 18:13:13 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	setType(type);
	std::cout<< "Creation de " << getType()<<std::endl;
}

Weapon::~Weapon(void){
	std::cout<< "Destruction de " << getType()<<std::endl;
}

std::string	Weapon::getType(void) const {return(type);}
void		Weapon::setType(std::string new_type) {type = new_type;}