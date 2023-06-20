#include "Fixed.hpp"

int const Fixed::bits_nb = 8;

Fixed::Fixed(void)
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const int_value)
{
	std::cout << "Int constructor called" << std::endl;
	value = int_value << bits_nb;
}

Fixed::Fixed(float const float_value)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(float_value * (1 << bits_nb));
}

Fixed::Fixed(Fixed const& toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed& Fixed::operator=(Fixed const& toAffect)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toAffect)
		value = toAffect.value;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int	Fixed::toInt(void) const
{
	return (value >> bits_nb);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << bits_nb));
}

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed_number)
{
	flux << fixed_number.toFloat();
	return (flux);
}

Fixed	operator>(Fixed const& f1, Fixed const& f2)
{
	return (f1 > f2);
}

Fixed	operator<(Fixed const& f1, Fixed const& f2)
{	
	return (f1 < f2);
}

Fixed	operator>=(Fixed const& f1, Fixed const& f2)
{	
	return (f1 >= f2);
}

Fixed	operator<=(Fixed const& f1, Fixed const& f2)
{	
	return (f1 <= f2);
}

Fixed	operator==(Fixed const& f1, Fixed const& f2)
{	
	return (f1 == f2);
}

Fixed	operator>(Fixed const& f1, Fixed const& f2)
{	
	return (!operator==(f1, f2));
}

Fixed	operator+(Fixed const& f1, Fixed const& f2)
{	
	return (f1 + f2);
}

Fixed	operator-(Fixed const& f1, Fixed const& f2)
{	
	return (f1 - f2);
}

Fixed&	Fixed::operator*=(const Fixed &fixed_number)
{
	this.value *= fixed_number.value >> bits_nb;
	return (*this);
}

Fixed	operator*(Fixed const& f1, Fixed const& f2)
{
	Fixed	res(f1);

	res *= f2;
	return (res);
}

Fixed&	Fixed::operator/=(const Fixed &fixed_number)
{
	float	temp;

	temp = this.value / fixed_number;
	this.value = roundf(temp * (1 << bits_nb));
	return (*this);
}

Fixed	operator/(Fixed const& f1, Fixed const& f2)
{
	Fixed	res(f1);

	res /= f2;
	return (res);
}

Fixed&	Fixed::operator++()
{
	this.value = this.value + (1 << bits_nb); 
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	++*this;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this.value = this.value - (1 << bits_nb);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	--*this;
	return (temp);
}
