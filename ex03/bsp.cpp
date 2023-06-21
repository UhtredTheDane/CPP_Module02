#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   detCA( (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX()) );

    Fixed   detAB( (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX()) );

    Fixed   detBC( (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX()) );

    return (detCA.toFloat() > 0. && detAB.toFloat() > 0. && detBC.toFloat() > 0. || detCA.toFloat() < 0. && detAB.toFloat() < 0. && detBC.toFloat() < 0.);
}