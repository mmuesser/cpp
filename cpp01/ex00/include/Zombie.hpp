/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:23:05 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 19:07:44 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public :
		Zombie(std::string name);
		~Zombie(void);

		void	setName(std::string name);
		std::string	getName(void) const;

		void	announce(void);

	private :
		std::string	name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif