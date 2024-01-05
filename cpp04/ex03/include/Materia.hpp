/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:08:59 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/02 16:15:33 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		AMateria(const AMateria &obj);
		AMateria(std::string const &type); //voir si je garde
		~AMateria(void);

		AMateria&	operator=(const AMateria &obj);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif