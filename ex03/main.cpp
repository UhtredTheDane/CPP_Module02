#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(1.f, 0.f);
	Point c(3.f, 2.f);
	Point b(5.f, 0.f);
	Point point(0.f, 0.f);

	if (bsp(a, b, c, point))
		std::cout << "Le point est dans le triangle !" << std::endl;
	else
		std::cout << "Le point n'est pas dans le triangle !" << std::endl;

	return (0);
}
