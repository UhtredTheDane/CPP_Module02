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

        Fixed getX() const;
        Fixed getY() const;
        ~Point(void);
    private:

        Fixed    x;
        Fixed    y;

};

#endif
