/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:57:47 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/17 16:01:29 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.class.hpp"

int	main(int argc, char **argv)
{
	PhoneBook repertoire;//Appel du constructeur de PhoneBook et creer un variable test avec les proprietes de PhoneBook
	std::string	input;
	(void)argv;

	if (argc == 1)
	{
		while(1)
		{
			std::cin >> input;
			if ((input == "EXIT") == 1)
				break;
			if ((input == "ADD") == 1)
				repertoire.add();
			if ((input == "SEARCH") == 1)
				repertoire.search();	
		}
	}
}