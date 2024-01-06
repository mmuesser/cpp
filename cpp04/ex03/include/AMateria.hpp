/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:08:59 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 17:01:22 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		AMateria(const AMateria &obj);
		virtual ~AMateria(void);

		AMateria&	operator=(const AMateria &obj);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif