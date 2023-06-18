/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:27:02 by lgirault          #+#    #+#             */
/*   Updated: 2023/06/16 09:28:34 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

static void	up(char **argv)
{
	int	i;
	int	j;
	
	j = 0;
	while (argv[++j] != NULL)
	{
		i = 0;
		while(argv[j][i] != '\0')
		{
			argv[j][i] = toupper(argv[j][i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		up(argv);
		while (*++argv != NULL)
			std::cout << *argv;
	}
	std::cout << std::endl;
}
