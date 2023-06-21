#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const int_value);
		Fixed(const float float_value);
		Fixed(Fixed const& toCopy);
		Fixed& operator=(Fixed const& toAffect); 
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
		Fixed&	operator+=(const Fixed &fixed_number);
		Fixed&	operator-=(const Fixed &fixed_number);
		Fixed&	operator*=(const Fixed &fixed_number);
		Fixed&	operator/=(const Fixed &fixed_number);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
	private:
		int	value;
		static int const bits_nb;

};

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed_number);
bool	operator>(Fixed const& f1, Fixed const& f2);
bool	operator<(Fixed const& f1, Fixed const& f2);
bool	operator>=(Fixed const& f1, Fixed const& f2);
bool	operator<=(Fixed const& f1, Fixed const& f2);
bool	operator==(Fixed const& f1, Fixed const& f2);
bool	operator!=(Fixed const& f1, Fixed const& f2);
Fixed	operator+(Fixed const& f1, Fixed const& f2);
Fixed	operator-(Fixed const& f1, Fixed const& f2);
Fixed	operator*(Fixed const& f1, Fixed const& f2);
Fixed	operator/(Fixed const& f1, Fixed const& f2);



#endif
