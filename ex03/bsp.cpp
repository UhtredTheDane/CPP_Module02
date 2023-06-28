/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:47:38 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/28 16:00:06 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed   detCA;
	Fixed   detAB;
	Fixed   detBC;
	bool    is_in;

	detCA = (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX());
	detAB = (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX());
	detBC = (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX());
	is_in = false;
	if (detCA.toFloat() > 0.f && detAB.toFloat() > 0.f && detBC.toFloat() > 0.f)
		is_in = true;
	else if (detCA.toFloat() < 0.f && detAB.toFloat() < 0.f && detBC.toFloat() < 0.f)
		is_in = true;
	return (is_in);
}
