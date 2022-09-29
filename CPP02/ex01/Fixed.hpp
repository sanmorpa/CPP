/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:43:11 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/26 13:54:13 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_RawBits;
		static const int	_fractional = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int fixed);
		Fixed(const float fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator = (const Fixed &fixed);
};

std::ostream	&operator << (std::ostream &os, const Fixed &fixed);

#endif
