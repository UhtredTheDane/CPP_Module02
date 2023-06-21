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
