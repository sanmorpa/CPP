/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:07:50 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 18:07:50 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << getName() << " is no longer useful. Say bye-bye" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return _name;
}
