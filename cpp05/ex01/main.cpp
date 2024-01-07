/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 19:03:32 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form fst_Form;
		Form snd_Form("snd_Form", 10, 150);
		Form thrd_Form("thrd_Form", 89, 23);
		std::cout<<"\n";

		Bureaucrat bob;
		Bureaucrat jean("jean", 8);
		std::cout<<"\n";

		jean.signForm(fst_Form);
		jean.signForm(snd_Form);
		bob.signForm(thrd_Form);
		bob.signForm(fst_Form);
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	return (0);
}