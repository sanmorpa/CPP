/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:48:00 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 21:48:00 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void	HumanB::attack(void)
{
	if (!_weapon)
		std::cout << _name << " cannot attack because they don't have a weapon." << std::endl;
	else
		std::cout << _name << " attacks with their '" << _weapon->getType() << "'." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
