#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    public:

        Point(void);
        Point(float const x, float const y);
        Point(Point const& toCopy);

        Point& operator=(Point const& toAffect);

        ~Point(void);
    private:

        Fixed::Fixed    x;
        Fixed::Fixed    y;

};

#endif;