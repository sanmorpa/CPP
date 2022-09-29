/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:43:08 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/28 14:25:33 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_RawBits = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int fixed)
{
	std::cout << "Int constructor called" << std::endl;
	_RawBits = fixed << _fractional;
}

Fixed::Fixed(const float fixed)
{
	std::cout << "Float constructor called" << std::endl;
	_RawBits = roundf((fixed * (1 << _fractional)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_RawBits = fixed.getRawBits();
	return *this;
}

std::ostream	&operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return ((float)_RawBits / (1 << _fractional));
}

int Fixed::toInt(void) const
{
	return (_RawBits >> _fractional);
}

int Fixed::getRawBits(void) const
{
	return _RawBits;
}

void Fixed::setRawBits(int const raw)
{
	_RawBits = raw;
}
