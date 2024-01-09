/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:19:24 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/09 20:38:55 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void	Harl::complain(std::string level){
	void	(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string tab[4] = {"debug", "info", "warning", "error"};
	int i = -1;
	
	while (++i < 4)
	{
		if (level == tab[i])
		{
			switch(i)
			{
				case 0: (this->*ptr[i])(); i++;
				case 1: (this->*ptr[i])(); i++;
				case 2:	(this->*ptr[i])(); i++;
				case 3: (this->*ptr[i])();
			}
			return ;
		}
	}
	std::cout<< "Please enter : \"debug\", \"info\", \"warning\" or \"error\""<<std::endl;
}

void	Harl::debug(void){
	std::cout<< "\n[DEBUG]"<<std::endl;
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !"<<std::endl;
}

void	Harl::info(void){
	std::cout<< "\n[INFO]"<<std::endl;
	std::cout<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<<std::endl;
}

void	Harl::warning(void){
	std::cout<< "\n[WARNING]"<<std::endl;
	std::cout<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."<<std::endl;	
}

void	Harl::error(void){
	std::cout<< "\n[ERROR]"<<std::endl;
	std::cout<< "This is unacceptable ! I want to speak to the manager now."<<std::endl;
}