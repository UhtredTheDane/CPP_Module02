/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:35:52 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/27 17:40:48 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits_nb = 8;

Fixed::Fixed(void)
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed& Fixed::operator=(Fixed const& toAffect)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toAffect)
		value = toAffect.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
