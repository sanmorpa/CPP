/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:24:43 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/29 10:35:36 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>

class Contact
{
	private:
		std::string	_name;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phone;
		std::string	_darkestSecret;

	public:
		void		show(void);
		void		contact(void);
		void		append(void);
		std::string	getName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone(void) const;
		std::string	getDarkestSecret(void) const;
		void		setName(std::string other);
		void		setLastName(std::string other);
		void		setNickname(std::string other);
		void		setPhone(std::string other);
		void		setDarkestSecret(std::string other);
};

#endif
