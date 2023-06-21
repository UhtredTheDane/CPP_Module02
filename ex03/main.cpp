#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	Point a(1.f, 0.f);
	Point b(3.f, 2.f);
	Point c(5.f, 0.f);
	Point point(3.f, 1.f);

	if (bsp(a, b, c, point))
		std::cout << "Le point est dans le triangle !" << std::endl;
	else
		std::cout << "Le point n'est pas dans le triangle !" << std::endl;

	return (0);
}