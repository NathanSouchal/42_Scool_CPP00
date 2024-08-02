/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:44:26 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/12 11:46:06 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main_headerfile.hpp"

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:
	void	display_contact_infos();
	void	set_lastname(std::string input);
	void	set_firstname(std::string input);
	void	set_nickname(std::string input);
	void	set_phonenumber(std::string input);
	void	set_darkestsecret(std::string input);
	void	display_firstname();
	void	display_lastname();
	void	display_nickname();
};
#endif