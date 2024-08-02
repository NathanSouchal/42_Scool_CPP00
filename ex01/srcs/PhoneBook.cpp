/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:56:02 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/16 11:33:45 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_headerfile.hpp"

void	PhoneBook::add_contact(int index)
{
	std::cout << "Enter your first name : ";
	contacts[index].set_firstname(ft_getline());
	std::cout << "Enter your last name : ";
	contacts[index].set_lastname(ft_getline());
	std::cout << "Enter your nickname : ";
	contacts[index].set_nickname(ft_getline());
	std::cout << "Enter your phone number : ";
	contacts[index].set_phonenumber(ft_getline());
	std::cout << "Enter your darkest secret : ";
	contacts[index].set_darkestsecret(ft_getline());
}

void	PhoneBook::search(int current_index, int marker)
{
	std::string	input;
	int			index;

	std::cout << "Enter contact's index : ";
	input = ft_getline();
	if (input.length() == 1 && std::isdigit(input[0]))
	{
		index = atoi(input.c_str());
		if (index >= 0 && index <= 7)
		{
			if (marker || index < current_index)
				contacts[index].display_contact_infos();
			else
				std::cout << "No contact at this index" << std::endl;
		}
		else
			std::cout << "Please enter a number between 0 and 7" << std::endl;
	}
	else
		std::cout << "Please enter a number between 0 and 7" << std::endl;
}

void	PhoneBook::display_all_contacts(int marker, int index)
{
	if (marker)
		index = 8;
	std::cout << std::setfill('*') << std::setw(45) << "*" << std::endl;
	std::cout << std::setfill(' ');
	print_col_title("index");
	print_col_title("first name");
	print_col_title("last name");
	print_col_title("nickname");
	std::cout << "*" << std::setfill('-') << std::setw(43) << "-" << "*" << std::endl;
	std::cout << std::setfill(' ');
	for (int i = 0; i < index ; i++)
	{
		std::cout << "*" << std::setw(10) << i << "|";
		contacts[i].display_firstname();
		contacts[i].display_lastname();
		contacts[i].display_nickname();
		std::cout << "*" << std::endl;
	}
	std::cout << std::setfill('*') << std::setw(45) << "*" << std::endl;
}