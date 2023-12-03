/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:51:13 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 18:58:40 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

void	randomChump(std::string name){
	Zombie zombie(name);
	zombie.setName(name);
	zombie.announce();
	std::cout<<"\n";
}