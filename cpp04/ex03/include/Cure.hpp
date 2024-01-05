/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:36:16 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/02 16:40:31 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Materia.hpp"

class	Cure : virtual public AMateria
{
	public :
		Cure(void);
		Cure(const Cure &obj);
		virtual ~Cure(void);

		Cure&	operator=(cont Cure &obj);

		Cure*	clone();

	private :
}

#endif