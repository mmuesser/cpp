/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:03:43 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/02 16:11:29 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"

std::string	Contact::getFName(void) const{return (f_name);}
std::string	Contact::getLName(void) const{return (l_name);}
std::string	Contact::getNName(void) const{return (nickname);}
std::string	Contact::getPhoneNumber(void) const{return (phone_number);}
std::string	Contact::getSecret(void) const{return (secret);}

void	Contact::setFName(std::string string){f_name = string;}
void	Contact::setLName(std::string string){l_name = string;}
void	Contact::setNName(std::string string){nickname = string;}
void	Contact::setPhoneNumber(std::string string){phone_number = string;}
void	Contact::setSecret(std::string string){secret = string;}
