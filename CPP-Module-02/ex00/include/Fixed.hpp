#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <bits/stdc++.h>

class Fixed {
	private:
		int value;
		static const int numBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixedToCopy);
		Fixed &operator=(const Fixed &fixedToCopy);
		~Fixed(void);
		int getRawBits(void) const ;
		void setRawBits(int const raw);
};

#endif