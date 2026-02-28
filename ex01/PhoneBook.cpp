/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:14:07 by lanton-m          #+#    #+#             */
/*   Updated: 2026/02/24 12:14:07 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	ft_add(PhoneBook *users_mobile, int i)
{
	Contact		my_contact;
	std::string	input;
	int			phone;

	std::cout << "Please, fill the information needed" << std::endl;
	std::cout << "First name:";
	std::getline(std::cin, input);
	my_contact.setFirstName(input);
	std::cout << "Last name:";
	std::getline(std::cin, input);
	my_contact.setLastName(input);
	std::cout << "Nickname:";
	std::getline(std::cin, input);
	my_contact.setNickname(input);
	std::cout << "Phone number:";
	std::cin >> phone;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	my_contact.setPhoneNum(phone);
	std::cout << "Darkest secret:";
	std::getline(std::cin, input);
	my_contact.setDarkest(input);
	users_mobile.setContact(my_contact, i);
}

int	main(void)
{
	std::string	command = "";
	PhoneBook	users_mobile;
	int			i = 0;

	std::cout << "Hi, welcome to your PhoneBook." << std::endl;
	std::cout << "You can use one of the next commands:" << std::endl;
	std::cout << "ADD: save a new contact" << std::endl;
	std::cout << "SEARCH: display a spoecific contact" << std::endl;
	std::cout << "EXIT: the program will quit (be carefull trhe contacts will be lost forever!)" << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Enter command:";
		std::cin >> command;
		if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			ft_add(&users_mobile, i);
			i++;
		}
	//	else if (command == "SEARCH")
	//		ft_search();
		else
			continue;
	}
	return 0;
}

//void	ft_search()