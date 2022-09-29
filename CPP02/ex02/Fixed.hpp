/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:43:11 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/29 10:25:52 by samoreno         ###   ########.fr       */
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
		Fixed	&operator = (Fixed const &fixed);
		bool	operator > (Fixed const &fixed) const;
		bool	operator < (Fixed const &fixed) const;
		bool	operator >= (Fixed const &fixed) const;
		bool	operator <= (Fixed const &fixed) const;
		bool	operator == (Fixed const &fixed) const;
		bool	operator != (Fixed const &fixed) const;
		Fixed	operator + (Fixed const &fixed) const;
		Fixed	operator - (Fixed const &fixed) const;
		Fixed	operator * (Fixed const &fixed) const;
		Fixed	operator / (Fixed const &fixed) const;
		Fixed	operator ++ ();
		Fixed	operator ++ (int);
		Fixed	operator -- ();
		Fixed	operator -- (int);
		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);

};

std::ostream	&operator << (std::ostream &os, const Fixed &fixed);

#endif
