/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:07:08 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/16 12:08:52 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_CLASS_HPP
#define PHONE_CLASS_HPP

#include <iostream>
#include <string>

typedef struct s_info_contact{

	std::string	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

} t_info_contact;

class	PhoneBook
{
	public:

		int rang_contact;
		int indice;
		t_info_contact repertoire[8];

		PhoneBook(void);/*Fonction constructeur de la classe pour initialiser la clase, le constructeur se fait automatiquement lors de la declaration de la classe*/
		~PhoneBook(void);/*Fonction destructeur de la classe pour supprimer la classe a la fin du programme, le destructeur se fait automatiquement a la fin du programme si pas de malloc*/
		void	add(void);
		void	search(void);
		void	print_repertoire(void);
		void	put_str(std::string spe_info);
};

class	Contact
{
	public:

		t_info_contact info_contact;

		Contact(void);
		~Contact(void);
		void	get_info(void);
		std::string	get_spe_info(std::string message);
};

# endif