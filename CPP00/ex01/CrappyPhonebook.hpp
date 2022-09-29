/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CrappyPhonebook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:13:03 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/29 10:33:28 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRAPPYPHONEBOOK_HPP
# define CRAPPYPHONEBOOK_HPP

# include "Contact.hpp"

class CrappyPhonebook
{
	private:
		Contact phonebook[8];
		int		filled;
		int		oldest;
		int		check_integer(std::string str);

	public:
		CrappyPhonebook();
		void	add(void);
		void	search(void);
};

#endif
