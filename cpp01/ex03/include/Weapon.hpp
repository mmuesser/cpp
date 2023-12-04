/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:31:59 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/04 16:48:53 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		
		std::string	getType(void) const;
		void		setType(std::string new_type);

	private :
		std::string	type;
};

#endif