/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:29:39 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/12 11:46:09 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main_headerfile.hpp"

class PhoneBook
{
	private:
	Contact	contacts[8];

	public:
	void	add_contact(int index);
	void	search(int current_index, int marker);
	void	display_all_contacts(int marker, int index);
};


#endif