/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:37:15 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/28 16:01:35 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed	c(53.4f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << a.toInt() << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << c.toInt() << std::endl;

	std::cout << c << " / " << b << " = " << c / b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	return (0);
}
