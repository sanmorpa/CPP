/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:48:09 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 21:48:09 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon()
{
	_type = "";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

std::string	const &Weapon::getType(void)
{
	return _type;
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}
