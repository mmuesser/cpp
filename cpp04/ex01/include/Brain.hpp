/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:35:03 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 19:38:06 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	public :
		Brain(void);
		Brain(const Brain &obj);
		~Brain(void);

		Brain&	operator=(const Brain &obj);

		std::string	getIdeas(void) const;
		void		setIdeas(std::string idea);

	private :
		std::string	*_ideas;
};

#endif