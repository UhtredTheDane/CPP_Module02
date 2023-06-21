#include "Point.hpp"

Point::Point(void)
{

}

Point::Point(float const& x, float const& y) : x(x), y(y)
{

}

Point(Point const& toCopy)
{
    this->x = toCopy.x;
    this->y = toCopy.y;
}

Point& operator=(Point const& toAffect)
{
    if (*this != toAffect)
    {
        this->x = toCopy.x;
        this->y = toCopy.y;
    }
    return (*this);
}
