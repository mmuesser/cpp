/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:26:55 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 18:58:43 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout<< "Creation de " << name<<std::endl;
}
Zombie::~Zombie(void){
	std::cout<< "Destruction de " << name<<std::endl;
}

void	Zombie::setName(std::string z_name){ name = z_name;}
std::string		Zombie::getName(void) const{ return(name);}

void	Zombie::announce(void){
	std::cout<< name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}