/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:35:31 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/15 19:06:58 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public :
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap &obj);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName(void) const;
		void		setName(std::string name);
		int			getHp(void) const;
		void		setHp(int hp);
		int			getEp(void) const;
		void		setEp(int hp);
		int			getAtk(void) const;
		void		setAtk(int hp);

	protected :
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_atk;

};	

#endif