/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:47:55 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 21:47:55 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	_name = name;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his '" << _weapon.getType() << "'." << std::endl;
}
