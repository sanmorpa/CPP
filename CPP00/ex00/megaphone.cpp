/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:52:02 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/19 09:07:26 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int    main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
			}
			std::cout << argv[i];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}