/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:06:28 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/17 17:04:55 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.class.hpp"

PhoneBook::PhoneBook(void)/*Constructeur pour la classe PhoneBook*/
{
	this->rang_contact = 0;
	this->indice = 0;
	std::cout << "Constructor PhoneBook called" << std::endl;
	return ;
	
}

PhoneBook::~PhoneBook(void)/*Constructeur pour la classe PhoneBook*/
{
	std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
	Contact new_contact;

	new_contact.get_info();//Fonciton de class contact pour recuperer les infos du contact
	if (this->indice == 8)
		this->indice = 0;
	new_contact.info_contact.index = this->indice + 48;
	this->repertoire[this->indice] = new_contact.info_contact;
	if (rang_contact < 8)
		this->rang_contact++;
	this->indice++;
}

void	PhoneBook::put_str(std::string spe_info)
{
	int	i;
	int 	len;

	i = 0;
	if ((int)spe_info.size() >= 10)
		len = 8;
	else
		len = 9;
	while (i < (int)spe_info.size() && i <= len)
	{
		std::cout << spe_info[i];
		i++;
	}
	if ((int)spe_info.size() > 9)
		std::cout << ".";
	if ((int)spe_info.size() < 10)
		while (i++ < 10)
			std::cout << " ";
}

void	PhoneBook::print_repertoire(void)
{
	int	j;

	j = -1;
	while (++j < this->rang_contact)
	{
		put_str(this->repertoire[j].index);
		std::cout << " | ";
		put_str(this->repertoire[j].first_name);
		std::cout << " | ";
		put_str(this->repertoire[j].last_name);
		std::cout << " | ";
		put_str(this->repertoire[j].nick_name);
		std::cout << std::endl;
	}
}

void	PhoneBook::search(void)
{
	std::string	index;
	int	j;

	j = -1;
	print_repertoire();
	std::cout << "Number contact ?" << std::endl;
	while (index[0] < 48 || index[0] > 56 || index.size() >= 2)
	{
		std::cin >> index;
		if (index[0] - 48 >= this->rang_contact || (index[0] < 48 || index[0] > 56))
		{
			std::cout << "Number contact unknown" << std::endl;
			return ;
		}
	}
	std::cout << this->repertoire[index[0] - 48].first_name << std::endl;
	std::cout << this->repertoire[index[0] - 48].last_name << std::endl;
	std::cout << this->repertoire[index[0] - 48].nick_name << std::endl;
	std::cout << this->repertoire[index[0] - 48].phone_number << std::endl;
	std::cout << this->repertoire[index[0] - 48].darkest_secret << std::endl;
}
