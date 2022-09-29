/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:23:58 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/28 14:59:55 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

static float	area(Point const &a, Point const &b, Point const &c)
{
	float area = ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2);
	if (area >= 0)
		return area;
	return (area * -1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	a0 = area(a, b, c);
	float	a1 = area(point, b, c);
	float	a2 = area(a, point, c);
	float	a3 = area(a, b, point);

	if (a1 == 0 || a2 == 0 || a3 == 0)
		return (0);
	return (a0 == a1 + a2 + a3);
}
