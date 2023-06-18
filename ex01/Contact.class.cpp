/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:30:44 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/17 15:43:40 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.class.hpp"

Contact::Contact(void)/*Constructeur pour la classe Contact*/
{
	std::cout << "Constructor Contact called" << std::endl;
	return ;
}

Contact::~Contact(void)/*Destructeur pour la classe Contact*/
{
	std::cout << "Destructor Contact called" << std::endl;
	return ;
}


std::string	Contact::get_spe_info(std::string message)//utiliser getline de string peut etre opti
{
	std::string	info;

	while (info.empty() == 1)
	{
		std::cout << message << std::endl;
		std::cin >> info;
	}
	return (info);
}

void	Contact::get_info(void)
{
	this->info_contact.first_name = get_spe_info("First name ?");
	this->info_contact.last_name = get_spe_info("Last name ?");
	this->info_contact.nick_name = get_spe_info("Nickname ?");
	this->info_contact.phone_number = get_spe_info("Phone number ?");
	this->info_contact.darkest_secret = get_spe_info("Darkest secret ?");
}