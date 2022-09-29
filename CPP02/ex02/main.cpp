/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:13:00 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/27 11:19:13 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	std::cout << "-----Main del PDF-----" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed( 2));
	Fixed c(5.5f);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "---End Main del PDF---" << std::endl;
	std::cout << "A: " << a <<std::endl;
	std::cout << "B: " << b <<std::endl;
	std::cout << "C: "<< c <<std::endl;
	std::cout << "C/B: " << c / b <<std::endl;
	std::cout << "C*B: " << c * b <<std::endl;
	std::cout << "C-C: " << c - c <<std::endl;
	std::cout << "C+B: "<< c + b <<std::endl;
	std::cout << "Min b and c: " << Fixed::max(c, b) << std::endl;
	if (a == b)
		std::cout << "a and b are the same" <<  std::endl;
	else
		std::cout << "a and b are different" <<  std::endl;
	if (a > b)
		std::cout << "a is larger than b" <<  std::endl;
	else
		std::cout << "a is smaller than b" <<  std::endl;
	if (a <= b)
		std::cout << "a is smaller or equal than b" <<  std::endl;
	else
		std::cout << "a is strictly larger than b" <<  std::endl;
	return 0;
}
