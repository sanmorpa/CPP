/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:07:54 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 18:07:54 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void		announce(void);
		void		setName(std::string name);
		std::string	getName(void);

};

Zombie* zombieHorde(int N, std::string name);

#endif
