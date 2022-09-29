/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CrappyPhonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:33:08 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 12:30:32 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CrappyPhonebook.hpp"

CrappyPhonebook::CrappyPhonebook()
{
	filled = 0;
	oldest = 0;
}

void    CrappyPhonebook::add(void)
{
	if (filled < 8)
	{
		phonebook[filled].append();
		filled++;
	}
	else
	{
		std::cout << "Sorry, I'm so crappy that I can only add 8 contacts! Now, I will replace the oldest one you have :)\n";
		phonebook[oldest].append();
		if (oldest != 7)
			oldest++;
		else
			oldest = 0;
	}
}

int	CrappyPhonebook::check_integer(std::string str)
{
	int	i;

	if (str.length() == 1)
	{
		if (str[0] >= '0' && str[0] <= '7')
		{
			std::istringstream(str) >> i;
			if (i < filled)
				return (i);
		}
	}
	return (-1);
}

void    CrappyPhonebook::search(void)
{
	int			found = -1;
	std::string	input;
	
	if (filled == 0)
	{
		std::cout << "Sorry! You have no contacts yet! :(" << std::endl;
		return ;
	}
	std::cout <<  '|' << std::string(5, ' ') << "Index" << '|' << std::string(6, ' ') << "Name" << '|' << std::string(1, ' ') << "Last Name" << '|' << std::string(2, ' ') << "Nickname" << '|' << std::endl;
	for (int i = 0; i < filled; i++)
	{
		std::cout <<  '|' << std::string(10 - std::to_string(i).length(), ' ') << i << '|';
		phonebook[i].show();
	}
	while (found == -1)
	{
		std::cout << "What user do you want to find? insert the index, please: ";
		getline(std::cin, input);
		found = check_integer(input);
		if (found == -1)
			std::cout << "Error, the index must be one of the shown above" << std::endl;
	}
	phonebook[found].contact();
}
