#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const& toCopy);
		Fixed& operator=(Fixed const& toAffect); 
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	value;
		static int const bits_nb;

};
#endif
