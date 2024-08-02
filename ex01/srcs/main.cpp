/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:38:53 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/12 12:00:30 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_headerfile.hpp"

int	main()
{
	std::string	input;
	PhoneBook	phonebook;
	int			index = 0;
	int			eight_contacts_marker = 0;

	while (42)
	{
		std::cout << "Enter command : ";
		input = ft_getline();
		if (input.compare("ADD") == 0)
		{
			if (index == 8)
			{
				eight_contacts_marker++;
				index = 0;
			}
			phonebook.add_contact(index);
			index++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.display_all_contacts(eight_contacts_marker, index);
			phonebook.search(index, eight_contacts_marker);
		}
		else if (input.compare("EXIT") == 0)
			exit(0);
	}
	return(0);
}