/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:14:35 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 16:26:12 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		virtual ~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource &obj);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

	private :
		AMateria*	_storage[4];
};

#endif