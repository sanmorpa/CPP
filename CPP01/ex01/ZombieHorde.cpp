/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:58:32 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 20:58:32 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*ZombieHorde = new Zombie[N];
	if (!ZombieHorde)
		return (NULL);
	for (int i = 0; i < N; i++)
		ZombieHorde[i].setName(name);
	return (ZombieHorde);
}
