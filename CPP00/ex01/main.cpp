/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:37:01 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/19 12:29:15 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CrappyPhonebook.hpp"

int    main(void)
{
	CrappyPhonebook phonebook;
	std::string     input;

	do {
		std::cout << "Would you like to ADD, SEARCH or EXIT?: ";
		getline(std::cin, input);
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else
			std::cout << "Sorry, I'm so crappy that I can only ADD, SEARCH or EXIT." << std::endl;
	}
	while (!std::cin.eof());
	return (0);
}