/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:38:41 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/07 18:47:08 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define	HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		void		setWeapon(Weapon &h_weapon);
		Weapon		&getWeapon(void) const;
		void		setName(std::string h_name);
		std::string	getName(void) const;

		void	attack(void);

	private :
		Weapon	&weapon;
		std::string	name;
};

#endif