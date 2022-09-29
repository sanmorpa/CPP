/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:24:05 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/28 14:45:41 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point(): _x(Fixed()), _y(Fixed())
{
}

Point::Point(Fixed const x, Fixed const y): _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point &point)
{
	*this = point;
}

Point::~Point()
{
}

Point	const &Point::operator = (Point const &point)
{
	return point;
}

const Fixed 	&Point::getX(void)  const
{
	return (_x);
}

const Fixed 	&Point::getY(void) const
{
	return (_y);
}

std::ostream	&operator << (std::ostream &os, const Point &point)
{
	os << "(" << point.getX().toFloat() << ", " << point.getY().toFloat() << ")";
	return os;
}
