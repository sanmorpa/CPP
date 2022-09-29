/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:12:31 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/22 10:46:27 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	level;
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Karen must have one complain level! How dare you bother her for this?" << std::endl;
		return (1);
	}
	for (level = 0; level < 4; level++)
	{
		if (levels[level] == argv[1])
		{
			std::cout << "[ " << levels[level] << " ]" << std::endl;
			break ;
		}
	}
	if (level == 4 && std::string(argv[1]) != "ERROR") level = -1;
	switch(level)
	{
		case 0:
			karen.complain("DEBUG");
			level++;
		case 1:
			karen.complain("INFO");
			level++;
		case 2:
			karen.complain("WARNING");
			level++;
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
