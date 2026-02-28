/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:14:12 by lanton-m          #+#    #+#             */
/*   Updated: 2026/02/24 12:14:13 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	std::string	frase = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	while (i < argc)
	{
		while (argv[i][j])
		{
			if (!std::isalpha(argv[i][j]))
				std::cout << argv[i][j];
			else
			{
				if (std::isupper(argv[i][j]))
					std::cout << argv[i][j];
				else
					std::cout << (char)std::toupper(argv[i][j]);
			}
			j++;
		}
		i++;
		j = 0;
	}
}