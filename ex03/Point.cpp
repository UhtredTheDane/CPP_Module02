/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:47:58 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/28 16:00:44 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{

}

Point::Point(float const fx, float const fy)
{
	Fixed x(fx);
	Fixed y(fy);

	this->x = x;
	this->y = y;
}

Point::Point(Point const& toCopy)
{
	this->x = toCopy.x;
	this->y = toCopy.y;
}

Point::~Point(void)
{

}

Point& Point::operator=(Point const& toAffect)
{
	if (this != &toAffect)
	{
		this->x = toAffect.x;
		this->y = toAffect.y;
	}
	return (*this);
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}
