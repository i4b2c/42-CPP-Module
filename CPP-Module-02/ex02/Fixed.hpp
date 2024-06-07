#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <bits/stdc++.h>

#define DEBUG_MSG 1 

class Fixed {
	private:
		int value;
		static const int numBits = 8;
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &fixedToCopy);
		Fixed &operator=(const Fixed &fixedToCopy);
		~Fixed(void);
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const ;
		void setRawBits(int const raw);

		//new functions
		bool operator>(const Fixed &nbr);
		bool operator<(const Fixed &nbr);
		bool operator<=(const Fixed &nbr);
		bool operator>=(const Fixed &nbr);
		bool operator!=(const Fixed &nbr);
		bool operator==(const Fixed &nbr);
		Fixed operator+(const Fixed &nbr);
		Fixed operator-(const Fixed &nbr);
		Fixed operator/(const Fixed &nbr);
		Fixed operator*(const Fixed &nbr);
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
		static Fixed &max(Fixed &nb1, Fixed &nb2);
		static const Fixed &max(Fixed const &nb1, Fixed const &nb2);
		static Fixed &min(Fixed &nb1, Fixed &nb2);
		static const Fixed &min(Fixed const &nb1, Fixed const &nb2);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif
