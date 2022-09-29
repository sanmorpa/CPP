/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:24:08 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/28 14:38:05 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(Fixed const x, Fixed const y);
		Point(const Point &point);
		~Point();
		Point const	&operator = (Point const &point);
		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;
};
std::ostream	&operator << (std::ostream &os, const Point &point);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
