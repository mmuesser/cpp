/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:50:56 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 18:58:37 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie	*newZombie(std::string name){
	Zombie	*zombie = new Zombie(name);
	return (zombie->setName(name), zombie);
}