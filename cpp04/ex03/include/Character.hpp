/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:41:10 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 16:30:18 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	public :
		Character();
		Character(std::string name);
		Character(const Character &obj);
		virtual ~Character(void);

		Character&	operator=(const Character &obj);

		std::string	const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private :
		std::string	_name;
		AMateria* 	_inventory[4];
};

#endif