/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:16:24 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 13:08:59 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Materia.hpp"

class	Ice : virtual public AMateria
{
	public :
		Ice(void);
		Ice(const Ice &obj);
		virtual ~Ice(void);

		Ice&	operator=(const Ice &obj);

		virtual Ice* clone(std::string name);
		void	shoot_ice(std::string name);

	private :
}

#endif
