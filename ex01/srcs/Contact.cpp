/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:00:31 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/12 11:46:11 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_headerfile.hpp"

void	Contact::display_contact_infos()
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}

void	Contact::set_lastname(std::string input)
{
	last_name = input;
}

void	Contact::set_firstname(std::string input)
{
	first_name = input;
}

void	Contact::set_nickname(std::string input)
{
	nickname = input;
}

void	Contact::set_phonenumber(std::string input)
{
	phone_number = input;
}

void	Contact::set_darkestsecret(std::string input)
{
	darkest_secret = input;
}

void	Contact::display_firstname()
{
	std::string cut_str;

	if (first_name.length() <= 10)
		std::cout << std::setw(10) << first_name << "|";
	else
	{
		cut_str = first_name.substr(0,9);
		std::cout << cut_str << ".|";
	}
}

void	Contact::display_lastname()
{
	std::string cut_str;

	if (last_name.length() <= 10)
		std::cout << std::setw(10) << last_name << "|";
	else
	{
		cut_str = last_name.substr(0,9);
		std::cout << cut_str << ".|";
	}
}

void	Contact::display_nickname()
{
	std::string cut_str;

	if (nickname.length() <= 10)
		std::cout << std::setw(10) << nickname;
	else
	{
		cut_str = nickname.substr(0,9);
		std::cout << cut_str << ".";
	}
}