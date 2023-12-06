/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:19:01 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/06 16:34:51 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define	HARL_HPP

#include <iostream>

class	Harl
{
	public :
		Harl(void);
		~Harl(void);

		void complain( std::string level );

	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif