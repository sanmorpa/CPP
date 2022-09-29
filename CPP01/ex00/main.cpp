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
	std::cout << "---------- ZOMBIES TEST ----------" << std::endl;
	Zombie stack("Patrisio");
	Zombie *heap = newZombie("Pinwinasio");

	stack.announce();
	heap->announce();

	randomChump("Pinwilly");

	delete heap;
	std::cout << "------------ END TEST ------------" << std::endl;
	return (0);
}
