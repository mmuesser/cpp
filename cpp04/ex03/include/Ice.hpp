/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:16:24 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 16:24:27 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class	Ice : virtual public AMateria
{
	public :
		Ice(void);
		Ice(const Ice &obj);
		virtual ~Ice(void);

		Ice&	operator=(const Ice &obj);

		AMateria*	clone() const;
		void			use(ICharacter &target);

	private :
};

#endif
