/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:36:07 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/28 15:20:14 by agengemb         ###   ########.fr       */
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

Fixed::Fixed(float const float_value)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(float_value * (1 << bits_nb));
}

Fixed::Fixed(Fixed const& toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = toCopy.value;
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

bool	operator>(Fixed const& f1, Fixed const& f2)
{
	return (f1.getRawBits() > f2.getRawBits());
}

bool	operator<(Fixed const& f1, Fixed const& f2)
{	
	return (f1.getRawBits() < f2.getRawBits());
}

bool	operator>=(Fixed const& f1, Fixed const& f2)
{	
	return (f1.getRawBits() >= f2.getRawBits());
}

bool	operator<=(Fixed const& f1, Fixed const& f2)
{	
	return (f1.getRawBits() <= f2.getRawBits());
}

bool	operator==(Fixed const& f1, Fixed const& f2)
{	
	return (f1.getRawBits() == f2.getRawBits());
}

bool	operator!=(Fixed const& f1, Fixed const& f2)
{	
	return (!operator==(f1, f2));
}

Fixed&	Fixed::operator+=(const Fixed &fixed_number)
{
	this->value += fixed_number.value;
	return (*this);
}

Fixed	operator+(Fixed const& f1, Fixed const& f2)
{	
	Fixed copy(f1);

	copy += f2;
	return (copy);
}

Fixed&	Fixed::operator-=(const Fixed &fixed_number)
{
	this->value -= fixed_number.value;
	return (*this);
}

Fixed	operator-(Fixed const& f1, Fixed const& f2)
{	
	Fixed copy(f1);
	copy -= f2;
	return (copy);
}

//divise par 2^nb_bits	
Fixed&	Fixed::operator*=(const Fixed &fixed_number)
{
	this->value *= fixed_number.value >> bits_nb;
	return (*this);
}

Fixed	operator*(Fixed const& f1, Fixed const& f2)
{
	Fixed	res(f1);

	res *= f2;
	return (res);
}

//multiplie par 2^nb_bits
Fixed&	Fixed::operator/=(const Fixed &fixed_number)
{
	float	temp;
	int denominator_value;

	denominator_value = fixed_number.value;
	if (denominator_value == 0)
	{
		std::cout << "Error, division by zero" << std::endl;
		this->value = 0;
	}
	else
	{
		temp = (float)this->value / denominator_value;
		this->value = roundf(temp * (1 << bits_nb));
	}
	return (*this);
}

Fixed	operator/(Fixed const& f1, Fixed const& f2)
{
	Fixed	res(f1);

	res /= f2;
	return (res);
}

Fixed&	Fixed::operator++()
{
	this->value += 1; 
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	++*this;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	--*this;
	return (temp);
}

Fixed&  Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed const& Fixed::min(Fixed const& f1, Fixed const& f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed&  Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

Fixed const& Fixed::max(Fixed const& f1, Fixed const& f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}
