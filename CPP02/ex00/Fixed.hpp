/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:43:11 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/26 11:28:33 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_RawBits;
		static const int	_fractional = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed &operator = (const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
