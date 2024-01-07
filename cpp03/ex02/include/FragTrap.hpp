/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:49:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 15:01:01 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &obj);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap &obj);

		void	attack(const std::string& target);
		void 	highFivesGuys(void);
};

#endif