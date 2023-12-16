/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:56:16 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 14:22:59 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap(void);

		ScavTrap&	operator=(const ScavTrap &obj);

		void	attack(const std::string& target);
		void 	guardGate();

	private :

};

#endif