/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:15:30 by lanton-m          #+#    #+#             */
/*   Updated: 2026/02/24 12:15:30 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK
#include <iostream>
#include <cctype>

class Contact
{
	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		int			phone_num;

	public:

		void			setFirstName(std::string _first_name)
		{
			first_name = _first_name;
		}

        std::string 	getFirstName()
        {
            return first_name;
        }

		void			setLastName(std::string _last_name)
		{
			last_name = _last_name;
		}

        std::string 	getLastName()
        {
            return last_name;
        }

		void			setNickname(std::string _nickname)
		{
			nickname = _nickname;
		}

        std::string 	getNicktname()
        {
            return nickname;
        }

		void			setPhoneNum(int _phone_num)
		{
			phone_num = _phone_num;
		}

		int				getPhoneNum()
		{
			return phone_num;
		}

		void			setDarkest(std::string _darkest_secret)
		{
			darkest_secret = _darkest_secret;
		}

		std::string 	getDarkest()
        {
            return darkest_secret;
        }

		Contact();

		~Contact();
};

class PhoneBook
{
	private:
		Contact	contacts[8];
	public:
		void	setContact(Contact _my_contact, int i)
		{
			contacts[i] = _my_contact;
		}
		PhoneBook();
		~PhoneBook();
};

Contact::Contact(){}

Contact::~Contact(){}

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

#endif