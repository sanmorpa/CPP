/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:48:03 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 21:48:03 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon 		*_weapon;
		std::string	_name;

	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
};

#endif
