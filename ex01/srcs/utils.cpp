/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:17:39 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/12 13:57:47 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_headerfile.hpp"

std::string	ft_getline()
{
	std::string str;

	while(42)
	{
		std::getline(std::cin, str);
		if (std::cin.eof() == 1)
			exit(1);
		else if (str.empty())
			std::cout << "This field can't be empty" << std::endl << "Try again : ";
		else
			return (str);
	}
	return (str);
}

void	print_col_title(std::string str)
{
	if (!str.compare("index"))
		std::cout << "*" << std::setw(10) << str << "|";
	else if (!str.compare("nickname"))
		std::cout << std::setw(10) << str << "*" << std::endl;
	else
		std::cout << std::setw(10) << str << "|";
}