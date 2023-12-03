/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:57:57 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 19:19:59 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

/*ESSAYER DE FAIRE L'ALLOCATION EN DONNANT NAME AU CONSTRUCTEUR*/

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return (horde);
}