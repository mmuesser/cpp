/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:35:03 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/21 16:12:28 by mmuesser         ###   ########.fr       */
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

		std::string	getIdeas(int i) const;
		void		setIdeas(std::string idea, int i);

	private :
		std::string	*_ideas;
};

#endif