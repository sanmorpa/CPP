/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:31:04 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/29 10:37:13 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::append(void)
{
	do
	{
		std::cout << "New contact's first name:" << std::endl;
		getline(std::cin, _name);
	}
	while (_name.length() == 0);

	do
	{
		std::cout << "New contact's last name:" << std::endl;
		getline(std::cin, _lastName);
	}
	while (_lastName.length() == 0);

	do
	{
		std::cout << "New contact's nickname:" << std::endl;
		getline(std::cin, _nickname);
	}
	while (_nickname.length() == 0);

	do
	{
		std::cout << "New contact's phone:" << std::endl;
		getline(std::cin, _phone);
	}
	while (_phone.length() == 0);

	do
	{
		std::cout << "New contact's darkest secret:" << std::endl;
		getline(std::cin, _darkestSecret);
	}
	while (_darkestSecret.length() == 0);
}

void	Contact::show(void)
{
	if (_name.length() > 10)
		std::cout << _name.substr(0, 9) << '.' << '|';
	else
		std::cout << std::string(10 - _name.length(), ' ') << this->getName() << '|';

	if (_lastName.length() > 10)
		std::cout << _lastName.substr(0, 9) << '.' << '|';
	else
		std::cout << std::string(10 - _lastName.length(), ' ') <<  this->getLastName() << '|';

	if (_nickname.length() > 10)
		std::cout << _nickname.substr(0, 9) << '.' << '|' << std::endl;
	else
		std::cout << std::string(10 - _nickname.length(), ' ') <<  this->getNickname() << '|' << std::endl;
}

void Contact::contact(void)
{
	std::cout << "First Name: " << this->getName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone: " << this->getPhone() << std::endl;
	std::cout << "Darkest secret: " << this->getDarkestSecret() << std::endl;
}


std::string Contact::getName(void) const
{
	return _name;
}

std::string Contact::getLastName(void) const
{
	return _lastName;
}

std::string Contact::getNickname(void) const
{
	return _nickname;
}

std::string Contact::getPhone(void) const
{
	return _phone;
}

std::string Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}

void	Contact::setName(std::string other)
{
	_name = other;
}

void	Contact::setLastName(std::string other)
{
	_lastName = other;
}
void	Contact::setNickname(std::string other)
{
	_nickname = other;
}

void	Contact::setPhone(std::string other)
{
	_phone = other;
}

void	Contact::setDarkestSecret(std::string other)
{
	_darkestSecret = other;
}
