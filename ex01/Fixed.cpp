/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:47:19 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/27 17:47:25 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits_nb = 8;

Fixed::Fixed(void)
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const int_value)
{
	std::cout << "Int constructor called" << std::endl;
	value = int_value << bits_nb;
}

Fixed::Fixed(const float float_value)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(float_value * (1 << bits_nb));
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
		value = toAffect.value;
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

int	Fixed::toInt(void) const
{
	return (value >> bits_nb);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << bits_nb));
}

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed_number)
{
	flux << fixed_number.toFloat();
	return (flux);
}
