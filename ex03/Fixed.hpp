/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:36:21 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/27 18:39:33 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const int_value);
		Fixed(const float float_value);
		Fixed(Fixed const& toCopy);
		Fixed& operator=(Fixed const& toAffect); 
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
		Fixed&	operator+=(const Fixed &fixed_number);
		Fixed&	operator-=(const Fixed &fixed_number);
		Fixed&	operator*=(const Fixed &fixed_number);
		Fixed&	operator/=(const Fixed &fixed_number);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&  min(Fixed& f1, Fixed& f2);
		static Fixed const& min(Fixed const& f1, Fixed const& f2);
		static Fixed&  max(Fixed& f1, Fixed& f2);
		static Fixed const& max(Fixed const& f1, Fixed const& f2);

	private:
		int	value;
		static int const bits_nb;

};

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed_number);
bool	operator>(Fixed const& f1, Fixed const& f2);
bool	operator<(Fixed const& f1, Fixed const& f2);
bool	operator>=(Fixed const& f1, Fixed const& f2);
bool	operator<=(Fixed const& f1, Fixed const& f2);
bool	operator==(Fixed const& f1, Fixed const& f2);
bool	operator!=(Fixed const& f1, Fixed const& f2);
Fixed	operator+(Fixed const& f1, Fixed const& f2);
Fixed	operator-(Fixed const& f1, Fixed const& f2);
Fixed	operator*(Fixed const& f1, Fixed const& f2);
Fixed	operator/(Fixed const& f1, Fixed const& f2);

#endif
