/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:43:08 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/28 14:57:01 by samoreno         ###   ########.fr       */
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
	_RawBits = fixed.getRawBits();
	return *this;
}

bool	Fixed::operator < (Fixed const &fixed) const
{
	return this->_RawBits < fixed._RawBits;
}

bool	Fixed::operator > (Fixed const &fixed) const
{
	return !(*this < fixed);
}

bool	Fixed::operator >= (Fixed const &fixed) const
{
	return (!(*this < fixed) || *this == fixed);
}

bool	Fixed::operator <= (Fixed const &fixed) const
{
	return (*this < fixed || *this == fixed);
}

bool	Fixed::operator == (Fixed const &fixed) const
{
	return (this->_RawBits == fixed._RawBits);
}

bool	Fixed::operator != (Fixed const &fixed) const
{
	return !(*this == fixed);
}

Fixed Fixed::operator + (Fixed const &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator - (Fixed const &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator * (Fixed const &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator / (Fixed const &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator ++ ()
{
	Fixed ret;

	++_RawBits;
	ret.setRawBits(_RawBits);
	return (ret);
}

Fixed Fixed::operator ++ (int)
{
	Fixed ret;

	ret._RawBits = _RawBits++;
	return (ret);
}

Fixed Fixed::operator -- ()
{
	Fixed ret;

	--_RawBits;
	ret.setRawBits(_RawBits);
	return (ret);
}

Fixed Fixed::operator -- (int)
{
	Fixed ret;

	ret._RawBits = _RawBits--;
	return (ret);
}

std::ostream	&operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
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
