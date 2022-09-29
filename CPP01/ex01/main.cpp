/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:08 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 18:08:08 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "---------- ZOMBIE HORDE ----------" << std::endl;
	Zombie	*Horde = zombieHorde(5, "Patrisio");
	if (!Horde)
		return (1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "I'm zombie " << i << " ";
		Horde[i].announce();
	}
	delete[] Horde;

	Zombie	*newHorde = zombieHorde(10, "Pinwilly");
	if (!newHorde)
		return (1);
	for (int i = 0; i < 10; i++)
	{
		std::cout << "I'm zombie " << i << " ";
		newHorde[i].announce();
	}
	delete[] newHorde;

	std::cout << "------------ END TEST ------------" << std::endl;
	return (0);
}
