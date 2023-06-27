/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:34:45 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/27 17:41:31 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const& toCopy);
		Fixed& operator=(Fixed const& toAffect); 
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	value;
		static int const bits_nb;

};

#endif
