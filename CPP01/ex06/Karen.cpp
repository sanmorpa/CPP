/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:20:20 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/22 10:03:06 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month..." << std::endl;
}

void Karen::error(void)
{
		std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void		(Karen::*functptr[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; functptr[i]; i++)
	{
		if (levels[i] == level)
		{
			(this->*functptr[i])();
			return ;
		}
	}
	std::cout << "Karen doesn't have that complain level. How dare you try to do that?!" << std::endl;
}
