/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:39:06 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/04 18:23:10 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public :
		HumanB(std::string name);
		~HumanB(void);

		void		setWeapon(Weapon &h_weapon);
		std::string	getWeapon(void) const;
		void		setName(std::string h_name);
		std::string	getName(void) const;

		void	attack(void);

	private :
		Weapon	*weapon;
		std::string	name;
};

#endif