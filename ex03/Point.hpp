/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:48:04 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/28 16:00:50 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const& toCopy);
		~Point(void);

		Point& operator=(Point const& toAffect);

		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed    x;
		Fixed    y;

};

#endif
