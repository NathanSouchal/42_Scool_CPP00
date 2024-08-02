/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:21:45 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/16 08:56:14 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	char	*input_str;

	if (argc >= 2)
	{
		for (int i_av = 1; i_av < argc; i_av++)
		{
			input_str = argv[i_av];
			for (size_t i = 0; i < strlen(input_str); i++)
				std::cout << char(toupper(input_str[i]));
			if (i_av == argc - 1)
				std::cout << std::endl;
		}
	}
	else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}