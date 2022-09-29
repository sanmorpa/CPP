/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:32:41 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/20 21:32:41 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main(void)
{
	std::string	hi = "HI THIS IS BRAIN";
	std::string	*stringPTR = &hi;
	std::string	&stringREF = hi;

	std::cout << &hi << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
