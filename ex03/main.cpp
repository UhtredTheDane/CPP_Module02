/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:42:15 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/28 16:00:20 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(1.f, 0.f);
	Point c(3.f, 2.f);
	Point b(5.f, 0.f);
	Point point(1.f, 1.f);

	if (bsp(a, b, c, point))
		std::cout << std::endl << "Le point est dans le triangle !" << std::endl;
	else
		std::cout << std::endl << "Le point n'est pas dans le triangle !" << std::endl;
	std::cout << std::endl;
	return (0);
}
