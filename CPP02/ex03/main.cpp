/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:24:03 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/28 14:59:40 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define YELLOW	"\033[33m"
#define CYAN	"\033[36m"

#include "Point.hpp"

int	main(void)
{

	std::cout << GREEN << "[Triangle 1]" << RESET << std::endl;
	std::cout << "The Triangle's vertices are: a" << Point(0, 0) << "; b" << Point(2, 3) << "; c" <<  Point(4, 0) << "; And the point is: p" << Point(1, 1) << std::endl;
	if (bsp(Point(0, 0), Point(2, 3), Point(4, 0), Point(1, 1)) == 1)
		std::cout << "P is inside the triangle" << std::endl;
	else
		std::cout << "P is outside the triangle" << std::endl;

	std::cout << RED << "\n[Triangle 2]" << RESET << std::endl;
	std::cout << "The Triangle's vertices are: a" << Point(-2, -1) << "; b" << Point(1, 3) << "; c" <<  Point(4, -2) << "; And the point is: p" << Point(-1, -0.5f) << std::endl;
	if (bsp(Point(-2, -1), Point(1, 3), Point(4, -2), Point(-1, -0.5f)) == 1)
		std::cout << "P is inside the triangle" << std::endl;
	else
		std::cout << "P is outside the triangle" << std::endl;

	std::cout << MAGENTA << "\n[Triangle 3]" << RESET << std::endl;
	std::cout << "The Triangle's vertices are: a" << Point(-2, -1) << "; b" <<Point(1, 3) << "; c" <<  Point(4, -2) << "; And the point is: p" << Point(3.5f, -0.5f) << std::endl;
	if (bsp(Point(-2, -1), Point(1, 3), Point(4, -2), Point(3.5f, -0.5f)) == 1)
		std::cout << "P is inside the triangle" << std::endl;
	else
		std::cout << "P is outside the triangle" << std::endl;

	std::cout << YELLOW << "\n[Triangle 4]" << RESET << std::endl;
	std::cout << "The Triangle's vertices are: a" << Point(2, 3) << "; b" << Point(4, 6) << "; c" <<  Point(5, 3) << "; And the point is: p" << Point(3, 4) << std::endl;
	if (bsp(Point(2, 3), Point(4, 6), Point(5, 3), Point(3, 4)) == 1)
		std::cout << "P is inside the triangle" << std::endl;
	else
		std::cout << "P is outside the triangle" << std::endl;

	std::cout << BLUE << "\n[Triangle 5]" << RESET << std::endl;
	std::cout << "The Triangle's vertices are: a" << Point(2, 3) << "; b" << Point(4, 6) << "; c" <<  Point(5, 3) << "; And the point is: p" << Point(3, 3) << std::endl;
	if (bsp(Point(2, 3), Point(4, 6), Point(5, 3), Point(3, 3)) == 1)
		std::cout << "P is inside the triangle" << std::endl;
	else
		std::cout << "P is outside the triangle" << std::endl;

	std::cout << CYAN << "\n[Triangle 6]" << RESET << std::endl;
	std::cout << "The Triangle's vertices are: a" << Point(2, 3) << "; b" << Point(4, 6) << "; c" <<  Point(5, 3) << "; And the point is: p" << Point(5, 3) << std::endl;
	if (bsp(Point(2, 3), Point(4, 6), Point(5, 3), Point(5, 3)) == 1)
		std::cout << "P is inside the triangle" << std::endl;
	else
		std::cout << "P is outside the triangle" << std::endl;
	return 0;
}
